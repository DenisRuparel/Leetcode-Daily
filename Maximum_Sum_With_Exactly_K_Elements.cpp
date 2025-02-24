#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int maximizeSum(vector<int> &nums, int k){
        sort(nums.begin(), nums.end());
        vector<int> temp;
        int lastElement = nums.back();
        int sum = 0;

        for (int i = 0; i < k; i++){
            temp.push_back(lastElement);
            lastElement++;
        }

        for (int i = 0; i < temp.size(); i++)
            sum += temp[i];

        return sum;
    }
};