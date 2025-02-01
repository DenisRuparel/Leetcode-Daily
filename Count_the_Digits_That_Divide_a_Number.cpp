#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countDigits(int num) {
        int rem, count = 0;
        int temp = num;

        while (temp > 0) {
            rem = temp % 10; 
            if (num % rem == 0) 
                count++;
            temp /= 10; 
        }
        
        return count;
    }
};