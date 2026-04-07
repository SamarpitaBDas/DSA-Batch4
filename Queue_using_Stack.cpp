#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class MyQueue {
public:
    stack<int> inStack, outStack;
    MyQueue() {
        
    }
    
    void push(int x) {
        inStack.push(x);
    }
    
    int pop() {
        peek();
        int val = outStack.top();
        outStack.pop();
        return val;        
    }
    
    int peek() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
        return outStack.top();
    }

    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
int main(){
    MyQueue* obj = new MyQueue();
    obj->push(1);
    obj->push(2);
    cout << "Peek: " << obj->peek() << endl; // returns 1
    cout << "Pop: " << obj->pop() << endl;   // returns 1
    cout << "Empty: " << obj->empty() << endl; // returns false
    return 0;
}