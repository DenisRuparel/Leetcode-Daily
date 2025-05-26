#include<bits/stdc++.h>
using namespace std;
class NumArray {
public:
    vector<int> total;
    NumArray(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++)
            total.push_back(nums[i]);
    }
    
    int sumRange(int left, int right) {
        int sum=0;
        for(int i=left; i<=right; i++)
            sum += total[i];
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */