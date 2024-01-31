// Input : s = "abcabcbb"
// Output : 3

#include<bits/stdc++.h>
using namespace std;

// T.C : O(n^2) S.C : O(n)

int LongestSubstringWithoutRepeatingCharacters(string str){
    int n = str.length();
    int maxLen = INT_MIN;
    for(int i=0;i<n;i++){
        unordered_set<int>s;
        for(int j=i;j<n;j++){
            if(s.find(str[j])!=s.end()){
                maxLen = max(maxLen, j-i);
                break;
            }
            s.insert(str[j]);
        }
    }
    return maxLen;
}

int main(){
    string s = "abcabcbb";
    LongestSubstringWithoutRepeatingCharacters(s);
    return 0;
}