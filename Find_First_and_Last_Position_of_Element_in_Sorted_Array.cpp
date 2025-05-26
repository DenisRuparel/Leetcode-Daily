#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int checkBinary(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size() - 1;
        int ans = nums.size();

        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid] >= target){
                ans = mid;
                high = mid - 1;
            } else 
                low = mid + 1;
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.empty()) return {-1, -1};

        int left = checkBinary(nums, target);
        int right = checkBinary(nums, target + 1) - 1;

        if(left < nums.size() && nums[left] == target)
            return {left, right};

        return {-1, -1};
    }
};