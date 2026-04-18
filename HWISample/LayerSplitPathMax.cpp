#include <iostream>
#include <vector>
using namespace std;
long long maxPathValue(int n, int m, int k, vector<pair<int,int>>& nodes, vector<pair<int,int>>& edges){

}
int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<pair<int,int>> nodes(n);
    for (int i = 0; i < n; i++) {
        cin >> nodes[i].first >> nodes[i].second;
    }
    vector<pair<int,int>> edges(m);
    for (int i = 0; i < m; i++) {
        cin >> edges[i].first >> edges[i].second;
    }
    cout << maxPathValue(n, m, k, nodes, edges) << endl;
    return 0;
}