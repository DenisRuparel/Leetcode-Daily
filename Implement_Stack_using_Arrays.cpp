#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int cur=1;
        for(int i=0; i<target.size(); i++){
            while(cur < target[i]){
                ans.push_back("Push");
                ans.push_back("Pop");
                cur++;
            }
            ans.push_back("Push");
            cur++;
        }
        return ans;
    }
};