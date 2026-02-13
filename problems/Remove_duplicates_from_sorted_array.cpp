#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int> nums){
    if (nums.empty()) return 0;
    int k=1;
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
            nums[k]=nums[i];
            k++;
        }
    }
    return k;
}
int main(){
    vector<int> nums = {1,2,3,4,5,5,6,6,7,7};
    cout<<removeDuplicates(nums);
    return 0;
}