#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int balancedStringSplit(string s){
        int count = 0, r = 0, l = 0;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == 'R')
                r++;
            if (s[i] == 'L')
                l++;
            if (r == l)
                count++;
        }
        return count;
    }
};