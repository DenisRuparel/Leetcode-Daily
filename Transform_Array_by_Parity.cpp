#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> transformArray(vector<int>& nums) {
            vector<int> result;
            for(int i=0; i<nums.size(); i++){
                if(nums[i] % 2 == 0)
                    result.push_back(0);
                else
                    result.push_back(1);
            }
            sort(result.begin(), result.end());
            return result;
        }
    };