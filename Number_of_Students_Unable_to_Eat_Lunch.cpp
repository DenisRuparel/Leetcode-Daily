#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> studentQueue, sandwichQueue;

        for (int s : students) 
            studentQueue.push(s);
        for (int s : sandwiches) 
            sandwichQueue.push(s);

        int count = 0;
        while (!studentQueue.empty() && count < studentQueue.size()) {
            if (studentQueue.front() == sandwichQueue.front()) {
                studentQueue.pop();
                sandwichQueue.pop();
                count = 0; 
            } else {
                studentQueue.push(studentQueue.front());
                studentQueue.pop();
                count++;
            }
        }

        return studentQueue.size();
    }
};