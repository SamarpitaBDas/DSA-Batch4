#include <iostream>
#include <vector>
#include <queue>
using namespace std;

long long maxTastePoints(int n, long long m, vector<long long>& v, vector<long long>& d){
    
    priority_queue<pair<long long,long long>> pq;

    for(int i = 0; i < n; i++){
        pq.push({v[i], d[i]});
    }

    long long ans = 0;

    while(m-- && !pq.empty()){
        auto top = pq.top();
        pq.pop();

        long long val = top.first;
        long long dec = top.second;

        if(val <= 0) break;

        ans += val;

        pq.push({val - dec, dec});
    }

    return ans;
}

int main() {
    int n = 3;
    long long m = 5;

    vector<long long> v = {5, 7, 9};
    vector<long long> d = {2, 4, 6};

    cout << maxTastePoints(n, m, v, d) << endl;  // Expected: 27

    return 0;
}