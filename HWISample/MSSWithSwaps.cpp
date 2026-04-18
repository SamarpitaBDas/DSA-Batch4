#include <iostream>
#include <vector>
using namespace std;
int maxSubarraySumAfterKSwaps(int n, int k, vector<int>& a){

}
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::cout << maxSubarraySumAfterKSwaps(n, k, a) << std::endl;
    return 0;
}