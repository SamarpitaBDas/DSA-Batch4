#include <iostream>
#include <vector>
using namespace std;
vector<int> Rev1D(vector<int> & nums){
    int i=0, j = nums.size()-1;
    while(i<j){
        int temp = nums[i];
        nums[i]= nums[j];
        nums[j] = temp;
        i++;j--;
    }
    return nums;
}
int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    vector<int> res = Rev1D(nums);
    for(int i =0;i<res.size();i++){
        cout << res[i] << endl;
    }
    return 0;
}