#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
    int curr_sum = nums[0];
    int max_sum = nums[0];
    //base case
    if (nums.size()==1) return nums[0];
    for(int i=1;i<nums.size();i++){
        curr_sum = max (nums[i],curr_sum+nums[i]);
        max_sum = max(curr_sum,max_sum);
    }
    return max_sum;
    
}
int main(){
    vector<int> nums = {-1,3,2,8,-9};
    cout<< "max sum of sub array"<< maxSubArray(nums)<<endl;
}