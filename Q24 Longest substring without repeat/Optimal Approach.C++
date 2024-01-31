// Input : s = "abcabcbb"
// Output : 3

#include<bits/stdc++.h>
using namespace std;

// T.C : O(2n) S.C : O(n)

int LongestSubstringWithoutRepeatingCharacters(string str){
    int n = str.length();
    int maxLen = INT_MIN;
    int len = 0;
    unordered_set<char> st;
    int left = 0, right = 0;
    while(left<n && right<n){
        if(st.find(str[right]) != st.end()){
            st.erase(str[left]);
            left++;
        }
        else{
            st.insert(str[right]);
            right++;
            len = right - left + 1;
            maxLen = max(maxLen, len);
        }
    }
    return maxLen;
}

int main(){
    string s = "abcabcbb";
    LongestSubstringWithoutRepeatingCharacters(s);
    return 0;
}