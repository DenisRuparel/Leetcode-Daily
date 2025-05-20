#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if(s.length() == 0)
            return 0;

        int left = 0;
        int len = 0;
        map<char,int> mp;
        for(int right = 0 ; right < s.length() ; right++){
            char ch = s[right];

            if(mp.find(ch) != mp.end() && mp[ch] >= left)
                left = mp[ch] + 1;

            mp[ch] = right;
            len = max(len , right - left + 1);
           
        }

        return len;
    }
};