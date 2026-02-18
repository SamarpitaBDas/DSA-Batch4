#include <iostream>
#include <vector>
using namespace std;
int findPeakElement(vector<int> &nums){
    int l=0,r=nums.size()-1,m=nums.size();
    while(l<r){
        m = l+(r-l)/2;
        if(nums[m]>nums[m+1]){
            r=m;
        }
        else{
            l=m+1;
        }
    }
    return l;
}
int main(){
    vector<int> nums = {1,2,3,4,5,4,3,2,1};
    cout<<findPeakElement(nums);
    return 0;
}