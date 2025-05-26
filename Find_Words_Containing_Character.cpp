#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> findWordsContaining(vector<string> &words, char x){
        vector<int> temp;
        for (int i = 0; i < words.size(); i++){
            for (char c : words[i]){
                if (c == x){
                    temp.push_back(i);
                    break;
                }
            }
        }
        return temp;
    }
};