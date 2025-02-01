#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int differenceOfSums(int n, int m) {
        vector<int> divideThree, nonDivideThree;
        int sum=0, sum2=0;
        for(int i=1; i<=n; i++){
            if(i % m == 0)
                divideThree.push_back(i);
            else
                nonDivideThree.push_back(i);
        }
        for(auto it : divideThree)
            sum += it;

        for(auto it : nonDivideThree)
            sum2 += it;

        return sum2 - sum;
    }
};