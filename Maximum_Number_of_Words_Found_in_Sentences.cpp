#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int mostWordsFound(vector<string> &sentences){
        int maxWords = 0;

        for (const string &sentence : sentences){
            int wordCount = 1;
            for (char c : sentence){
                if (c == ' ')
                    wordCount++;
            }
            maxWords = max(maxWords, wordCount);
        }

        return maxWords;
    }
};