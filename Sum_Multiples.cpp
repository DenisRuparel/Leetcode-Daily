#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumOfMultiples(int n) {
        vector<int> temp;
        int num = n, sum=0;
        for(int i=1; i<=num; i++){
            if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
                temp.push_back(i);
        }
        for(auto it : temp)
            sum += it;
        return sum;
    }
};