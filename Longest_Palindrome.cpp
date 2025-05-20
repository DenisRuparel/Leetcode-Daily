#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> mp;

        for(int i = 0 ; i < s.length() ; i++)
            mp[s[i]]++;

        int len = 0;

        bool hasOdd = false;

        for (auto it = mp.begin(); it != mp.end(); it++){
            if(it -> second % 2 == 0)
                len += it -> second;
            else{
                len += it -> second - 1;
                hasOdd = true;
            }
        }
        if(hasOdd)
            len += 1;
        return len;
    }
};