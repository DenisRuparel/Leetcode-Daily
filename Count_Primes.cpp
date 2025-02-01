#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPrime(int num){
        for (int i = 2; i <= sqrt(num); i++){
            if (num % i == 0)
                return false;
        }
        return true;
    }
    int countPrimes(int n){
        int count = 0;
        for (int i = 2; i < n; i++){
            if (isPrime(i))
                count++;
        }
        return count;
    }
};