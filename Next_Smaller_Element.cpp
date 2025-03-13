#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> nextGreaterElements(vector<int>& nums) {
            vector<int> output(nums.size(), -1);
            
            for (int i = 0; i < nums.size(); i++) {
                for (int j = i+1; j < i+nums.size(); j++) { 
                    int index = j % nums.size();
                    if (nums[index] < nums[i]) { 
                        output[i] = nums[index];
                        break;
                    }
                }
            }
            return output;
        }
    };