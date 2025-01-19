#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto it: s) {
            if(it == '(' || it == '[' || it == '{')
                st.push(it);
            else{
                if(st.empty())
                    return false;
                char temp = st.top();
                st.pop();
                if((it == ')' && temp == '(') || (it == ']' && temp == '[') || (it == '}' && temp == '{')) 
                    continue;
                else 
                    return false;
            }
        }
        return st.empty();
    }
};