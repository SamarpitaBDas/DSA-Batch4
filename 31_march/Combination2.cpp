#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
std::vector<std::vector<int>> ans;

void solve(int start_index, std::vector<int>& nums, int target, std::vector<int>& temp) {
    if (target == 0) {
        ans.push_back(temp);
        return;
    }
    if (target < 0) {
        return;
    }

    for (int i = start_index; i < nums.size(); ++i) {
        if (i > start_index && nums[i] == nums[i - 1]) {
            continue;
        }
        temp.push_back(nums[i]);
        solve(i+1, nums, target - nums[i], temp);
        temp.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    std::vector<int> temp;
    std::sort(candidates.begin(), candidates.end());
    solve(0, candidates, target, temp);
    return ans;
}
int main() {
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;
    vector<vector<int>> result = combinationSum2(candidates, target);
    cout << "Combinations that sum to " << target << ":" << endl;
    for (const auto& combination : result) {
        cout << "[";
        for (size_t i = 0; i < combination.size(); ++i) {
            cout << combination[i];
            if (i < combination.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
    return 0;
}