#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        int lastValue = 0;

        for (int i = s.length() - 1; i >= 0; i--) {
            int currentValue;

            switch (s[i]) {
            case 'I':
                currentValue = 1;
                break;
            case 'V':
                currentValue = 5;
                break;
            case 'X':
                currentValue = 10;
                break;
            case 'L':
                currentValue = 50;
                break;
            case 'C':
                currentValue = 100;
                break;
            case 'D':
                currentValue = 500;
                break;
            case 'M':
                currentValue = 1000;
                break;
            default:
                currentValue = 0;
            }

            if (currentValue < lastValue)
                total -= currentValue;
            else
                total += currentValue;

            lastValue = currentValue;
        }

        return total;
    }
};