#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for (string search : words) {
            if (search.find(pref) == 0) {
                count++;
            }
        }
        return count;
    }
};