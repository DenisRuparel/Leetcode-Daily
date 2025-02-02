#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single=0, doub=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=1 && nums[i]<=9)    
                single += nums[i];
            else
                doub += nums[i];
        }
        if(single == doub)
            return false;
        return true;
    }
};