#include <iostream>
#include <vector>
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
        temp.push_back(nums[i]);
        solve(i, nums, target - nums[i], temp);
        temp.pop_back();
    }
}

std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
    std::vector<int> temp;
    solve(0, candidates, target, temp);
    return ans;
}

int main() {
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> result = combinationSum(candidates, target);
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