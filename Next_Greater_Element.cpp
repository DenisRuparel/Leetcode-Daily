#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            vector<int> output;
            
            for (int i = 0; i < nums1.size(); i++) { 
                int found = -1; 
                for (int j = 0; j < nums2.size(); j++) { 
                    if (nums1[i] == nums2[j]) { 
                        for (int k = j + 1; k < nums2.size(); k++) {
                            if (nums2[k] > nums1[i]) { 
                                found = nums2[k];
                                break;
                            }
                        }
                        break;
                    }
                }
                output.push_back(found);
            }
            return output;
        }
    };