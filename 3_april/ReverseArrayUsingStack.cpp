#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void reverseArrayUsingStack(vector<int>& arr) {
    stack<int> s;
    for (int x : arr) {
        s.push(x);
    }
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = s.top();
        s.pop();
    }
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "Original array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    reverseArrayUsingStack(arr);
    cout << "Reversed array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}