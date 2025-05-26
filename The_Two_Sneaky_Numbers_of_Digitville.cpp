#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int count=0;
        vector<int> temp;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[j] == nums[i]){
                    temp.push_back(nums[j]);
                    count++;
                }
            }
        }   
        if(temp.size() == 2)
            return temp;
        return nums;
    }
};