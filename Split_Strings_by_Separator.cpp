#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        for(int i=0; i<words.size(); i++){
            string word = "";
            for(auto a : words[i]){
                if(a==separator && word != ""){
                    ans.push_back(word);
                    word="";
                }
                if(a!=separator) 
                    word += a;
            }
            if(word != "")
                ans.push_back(word);
        }
        return ans;
    }
};