#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies){
        int maxCandy = *max_element(candies.begin(), candies.end());
    
        vector<bool> ans;

        for (int i = 0; i < candies.size(); i++){
            if (candies[i] + extraCandies >= maxCandy)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};