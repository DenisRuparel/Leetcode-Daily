#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> getRow(int rowIndex) {
            long long ans = 1;
            vector<int> temp;
            temp.push_back(ans);
            for(int i = 1; i <= rowIndex; i++){
                ans *= (rowIndex - i + 1);
                ans /= i;
                temp.push_back(ans);
            }
            return temp;
        }
    };