#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxNum = *max_element(nums.begin(), nums.end());
        int minNum = *min_element(nums.begin(), nums.end());
        return std::gcd(maxNum, minNum);
    }
};