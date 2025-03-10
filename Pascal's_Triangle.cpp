#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> generateRow(int row){
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for (int i = 1; i < row; i++){
            ans *= (row - i);
            ans /= i;
            ansRow.push_back(ans);
        }
        return ansRow;
    }

    vector<vector<int>> generate(int numRows){
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++)
            ans.push_back(generateRow(i));
        return ans;
    }
};