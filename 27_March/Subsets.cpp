#include <iostream>
#include <vector>
using namespace std;
void solve(vector<int>& nums, int start, vector<int>& temp, vector<vector<int>>& ans) {
    ans.push_back(temp);
    for (int i = start; i < nums.size(); ++i) {
        //take
        temp.push_back(nums[i]);
        solve(nums, i + 1, temp, ans);
        temp.pop_back();
    }
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> temp;
    solve(nums, 0, temp, ans);
    return ans;
}
int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = subsets(nums);
    cout << "Subsets:" << endl;
    for (const auto& subset : result) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
    return 0;
}