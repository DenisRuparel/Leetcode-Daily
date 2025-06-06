#include <bits/stdc++.h>
using namespace std;

struct QueueNode {
    int data;
    QueueNode *next;
};

class MyQueue {
  private:
    int arr[100005];
    int front;
    int rear;

  public:
    MyQueue() {
        front = 0;
        rear = 0;
    }

    void push(int);
    int pop();
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        MyQueue *sq = new MyQueue();

        int Q;
        cin >> Q;
        while (Q--) {
            int QueryType = 0;
            cin >> QueryType;
            if (QueryType == 1) {
                int a;
                cin >> a;
                sq->push(a);
            } else if (QueryType == 2) {
                cout << sq->pop() << " ";
            }
        }
        cout << endl;

        cout << "~"
             << "\n";
    }
}

void MyQueue ::push(int x) {
    if (rear >= 100005)
        return;
    arr[rear] = x;
    rear++;
}

int MyQueue ::pop() {
    if (front == rear)
        return -1;
    int ans = arr[front];
    front++;
    if (front == rear)
        front = 0, rear = 0;
    return ans;
}