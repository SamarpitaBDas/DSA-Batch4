#include <iostream>
#include <vector>
using namespace std;

bool recursion(vector<int> &nums, int target, int i)
{
    if(target == 0) return true;
    if(target < 0 || i == nums.size()) return false;

    bool include = recursion(nums, target - nums[i], i);
    bool exclude = recursion(nums, target, i + 1);

    return include || exclude;
}

int main(){
    vector<int> nums = {2,3,5};
    int target = 8;

    cout << recursion(nums, target, 0);
}