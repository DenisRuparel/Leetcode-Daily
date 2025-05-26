#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        int len = max(s.length(), t.length());
        char temp = 0;  
        
        for (int i = 0; i < len; i++) {
            if (i < s.length()) 
                temp ^= s[i];  
            
            if (i < t.length()) 
                temp ^= t[i];      
        }
        return temp;
    }
};