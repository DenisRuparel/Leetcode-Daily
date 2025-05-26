#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hammingWeight(int n) {
        string binary = "";
        while (n > 0) {
            binary = to_string(n % 2) + binary;
            n /= 2;
        }
        int count=0;
        for(int i=0; i<binary.length(); i++){
            if(binary[i] == '1')
                count++;
        }
        return count;
    }
};