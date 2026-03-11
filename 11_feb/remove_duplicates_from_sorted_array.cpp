#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    int pos =1;
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
            nums[pos++] = nums[i];
        }
    }
    return pos;
}
int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int new_size = removeDuplicates(nums);
    for(int i=0;i<new_size;i++){
        cout<<nums[i]<<" ";
    }
}