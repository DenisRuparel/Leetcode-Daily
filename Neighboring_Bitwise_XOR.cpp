#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        return (accumulate(derived.begin(), derived.end(), 0)&1)==0;
    }
};