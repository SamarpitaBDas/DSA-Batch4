#include <iostream>
#include <vector>
using namespace std;
long long maxTastePoints(int n, long long m, vector<long long>& v, vector<long long>& d){

}
int main() {
    int n;
    long long m;
    cin >> n >> m;
    vector<long long> v(n), d(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i] >> d[i];
    }
    cout << maxTastePoints(n, m, v, d) << endl;
    return 0;
}