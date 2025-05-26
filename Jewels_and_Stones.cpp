#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int numJewelsInStones(string jewels, string stones){
        int count = 0;
        for (char ch : jewels){
            for (char ch1 : stones){
                if (ch == ch1)
                    count++;
            }
        }
        return count;
    }
};