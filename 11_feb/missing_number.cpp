#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;
int missingNumber(vector<int>& nums) {
    int sum =0;
    int n = nums.size();
    int ap = n*(n+1)/2;
    for(int i=0;i<nums.size();i++){
        sum +=nums[i];
    }
    return ap-sum;
}
int main(){
    vector<int> nums = {3,0,1};
    cout<<missingNumber(nums);
}