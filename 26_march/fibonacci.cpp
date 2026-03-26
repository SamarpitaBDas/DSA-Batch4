#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int number;
    cout << "Enter a number to calculate its Fibonacci: ";
    cin >> number;
    if (number < 0) {
        cout << "Fibonacci is not defined for negative numbers." << endl;
    } else {
        cout << "Fibonacci of " << number << " is " << fibonacci(number) << "." << endl;
    }
    return 0;
}
