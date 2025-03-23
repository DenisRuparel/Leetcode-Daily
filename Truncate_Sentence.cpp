#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        string truncateSentence(string s, int k) {
            int count=0;
            string ans="";
            for(auto it : s){
                if(it == ' ')
                    count++;
                if(count == k)
                    break;
                ans += it;
            }
            return ans;
        }
    };