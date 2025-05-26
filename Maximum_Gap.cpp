#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() < 2)
            return 0;
        
        sort(nums.begin(), nums.end());
        int maxi=0;
        for(int i=1; i<nums.size(); i++)
            maxi = max(maxi, nums[i] - nums[i-1]);
        
        return maxi;
    }
};