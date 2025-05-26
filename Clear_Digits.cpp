#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDigits(string s) {
        string result;
        
        for (char c : s) {
            if (isdigit(c)) {
                if (!result.empty()) 
                    result.pop_back();
            } else 
                result.push_back(c);
        }
        
        return result;
    }
};