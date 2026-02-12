#include <iostream>
#include <vector>
using namespace std;
int MaxSubarray(vector<int> nums){
    int curr=nums[0];
    int max_s = nums[0];
    for(int i=0;i<nums.size();i++){
        curr = max(nums[i],curr+nums[i]);
        max_s = max(curr,max_s);
    }
    return max_s;
}
int main(){
    vector<int> nums ={1,2,3,4,-2,3,-23,4,6,3,5,2,5,3,-2,-8};
    cout<<"max sum of subarray is"<<MaxSubarray(nums);
    return 0;
}