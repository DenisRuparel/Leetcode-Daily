#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length())
            return false;
        
        map<char, char> mapS, mapT;
        
        for (int i = 0; i < s.length(); i++) {
            if ((mapS.count(s[i]) && mapS[s[i]] != t[i]) || (mapT.count(t[i]) && mapT[t[i]] != s[i])) 
                return false;
            
            mapS[s[i]] = t[i];
            mapT[t[i]] = s[i];
        }
        
        return true;
    }
};