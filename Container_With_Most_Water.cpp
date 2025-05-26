#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxarea = INT_MIN;
        while(left < right){
            int w = right - left;
            int h = min(height[left], height[right]);
            int area = w * h;
            if(height[left] < height[right])
                left++;
            else
                right--;
            
            maxarea = max(maxarea, area);
        }
        return maxarea;
    }
};