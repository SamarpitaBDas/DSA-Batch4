#include <iostream>
#include <vector> 
using namespace std;
vector<int> Dutch(vector<int> &nums){
    int l=0,m=0,h=nums.size()-1;
    while(m<=h){
        if(nums[m]==0){
            int t=nums[m];
            nums[m++]=nums[l];
            nums[l++]=t;
        }
        else if(nums[m]==1){
            m++;
        }
        else {
            int t=nums[h];
            nums[h--]=nums[m];
            nums[m]=t;
        }

    }
    return nums;

}
int main(){
    vector<int> nums ={1,1,2,1,2,0,2,0};
    vector<int> res = Dutch(nums);
    for(int i=0;i<res.size();i++){
        cout<<res[i];
    }
    return 0;
}