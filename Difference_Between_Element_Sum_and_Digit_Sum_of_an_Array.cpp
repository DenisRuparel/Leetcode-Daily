#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0, sumOfDigits = 0;

        for (int num : nums) {
            sum += num;
            int temp = num;
            while (temp > 0) {
                sumOfDigits += temp % 10;
                temp /= 10;
            }
        }

        return abs(sum - sumOfDigits);
    }
};