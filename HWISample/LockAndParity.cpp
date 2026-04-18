#include <iostream>
#include <vector>
using namespace std;
long long minCostLockAssignments(int n, vector<int>& L){

}
int main() {
    int n;
    cin >> n;
    vector<int> L(n);
    for (int i = 0; i < n; i++) {
        cin >> L[i];
    }
    cout << minCostLockAssignments(n, L) << endl;
    return 0;
}