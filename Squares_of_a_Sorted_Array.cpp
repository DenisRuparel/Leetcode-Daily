#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> sortedSquares(vector<int>& nums) {
            int sq=0;
            vector<int> temp;
            for(int i=0; i<nums.size(); i++)
                temp.push_back(nums[i] * nums[i]);
            sort(temp.begin(), temp.end());
            return temp;
        }
    };