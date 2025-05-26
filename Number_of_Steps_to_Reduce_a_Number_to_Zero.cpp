#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSteps(int num) {
        int cnt = 0;
        while (num != 0) {
            if (num % 2 == 0) {
                cnt++;
                num /= 2;
            } else {
                cnt++;
                num--;
            }
        }
        return cnt;
    }
};