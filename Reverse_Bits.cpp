#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> b(n);
        string s = b.to_string();
        reverse(s.begin(), s.end()); 
        return bitset<32>(s).to_ulong();
    }
};