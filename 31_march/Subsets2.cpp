#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(vector<int>& nums, int start, vector<int>& temp, vector<vector<int>>& ans) {
    ans.push_back(temp);
    for (int i = start; i < nums.size(); ++i) {
        if (i > start && nums[i] == nums[i - 1]) {
            continue;
        }
        //take
        temp.push_back(nums[i]);
        solve(nums, i + 1, temp, ans);
        temp.pop_back();
    }
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> temp;
    sort(nums.begin(),nums.end());
    solve(nums, 0, temp, ans);
    return ans;
}
int main() {
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> result = subsetsWithDup(nums);
    cout << "Subsets with duplicates:" << endl;
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