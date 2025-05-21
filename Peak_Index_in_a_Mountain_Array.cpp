#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0;
        int right = arr.size() - 1;
        int mid = (left + right) / 2;
        while(left < right){
            if(arr[mid] < arr[mid+1])
                left = mid + 1;
            else
                right = mid;

            mid = (left + right) / 2;
        }
        return left;
    }
};