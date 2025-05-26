#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=0, total=0, count=0;
        for(int i=0; i<nums.size(); i++)
            total += nums[i];
        for(int j=0; j<nums.size()-1; j++){
            sum += nums[j];
            if((sum-(total-sum))%2==0)
                count++;
        }
        return count;
    }
};