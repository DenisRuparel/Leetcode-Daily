#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
            string str, str2;
            for(const string& it : word1)
                str += it;
            for(const string& it : word2)
                str2 += it;
    
            return str == str2;
        }
    };