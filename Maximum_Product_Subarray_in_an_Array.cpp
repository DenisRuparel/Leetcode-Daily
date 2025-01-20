#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pref=1, suf=1, maxi=INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if(pref == 0)
                pref=1;
            if(suf == 0)
                suf=1;

            pref *= nums[i];
            suf *= nums[nums.size()-i-1];

            maxi = max(maxi, max(pref, suf));
        }
        return maxi;
    }
};