#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int findMin(vector<int>& nums){
    int l=0,r=nums.size()-1;
    while(l<r){
        int m = l+(r-l)/2;
        if(nums[m]<=nums[r]){
            r=m;
        }
        else{
            l=m+1;
        }
    }
    return nums[l];
}
int main(){
    vector<int> nums = {2,3,4,5,4,3,2};
    cout<<findMin(nums);
    return 0;
}