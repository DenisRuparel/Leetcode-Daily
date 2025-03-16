#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        
        vector<int> result(arr.size(), 0);
        
        for(auto it : arr)
            result[it-1]++;
        
        return result;
    }
};

int main() {
    int t; 
    cin >> t;
    cin.ignore(); 
    while (t--) {
        vector<int> a;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); 

        Solution obj;
        vector<int> result = obj.frequencyCount(a);

        if (result.empty()) {
            cout << "[]"; 
        } else {
            for (int i = 0; i < result.size(); i++) {
                if (i != 0)
                    cout << " ";
                cout << result[i];
            }
        }
        cout << endl;
    }

    return 0;
}