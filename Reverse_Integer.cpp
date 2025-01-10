#include<bits./stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int revNum = 0;
        while (x != 0) {  
            int rem = x % 10;
            x /= 10;
            
            if (revNum > INT_MAX / 10 || (revNum == INT_MAX / 10 && rem > 7)) return 0;
            if (revNum < INT_MIN / 10 || (revNum == INT_MIN / 10 && rem < -8)) return 0;
            
            revNum = revNum * 10 + rem;
        }
        return revNum;
    }
};