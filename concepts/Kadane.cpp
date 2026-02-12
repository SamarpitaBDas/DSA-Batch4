#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int Kadane(vector<int> &nums){
    int curr_sum = nums[0];
    int max_sum = nums[0];
    for(int i=0;i<nums.size();i++){
        curr_sum = max(nums[i],curr_sum+nums[i]);
        max_sum = max(max_sum,curr_sum);
    }
    return max_sum;
}
int main(){
    vector<int> nums = {-1,3,2,8,-9};
    cout<< "max sum of sub array"<< Kadane(nums)<<endl;
}