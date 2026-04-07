#include <iostream>
#include <vector>
using namespace std;
class Solution {
    void solve(vector<vector<int>>& ans,vector<int>& temp,vector<int>& nums,int idx,  vector<bool>& used){
        if(idx == nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(used[i]) continue;
            temp.push_back(nums[i]);
            used[i]= true;
            solve(ans, temp, nums, i, used);
            temp.pop_back();
            used[i] = false;

        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums){
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> used(nums.size(), false);
        solve(ans, temp, nums, 0, used);
        return ans;
    }
};
int main(){
    vector<int> nums = {1,2,3};
    Solution sol;
    vector<vector<int>> result = sol.permute(nums);
    cout << "Permutations of [1, 2, 3]:" << endl;
    for (const auto& permutation : result) {
        cout << "[";
        for (const auto& num : permutation) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}