#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int countConsistentStrings(string allowed, vector<string> &words){
        int counter = 0;
        for (int i = 0; i < words.size(); i++){
            bool isConsistent = true;

            for (char ch : words[i]){
                if (allowed.find(ch) == string::npos){
                    isConsistent = false;
                    break;
                }
            }

            if (isConsistent)
                counter++;
        }
        return counter;
    }
};