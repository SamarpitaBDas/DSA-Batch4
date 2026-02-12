#include <iostream>
#include <vector>
using namespace std;
int MissingNumber(vector<int>& nums){
    //fails if there are 2 or more missing numbers
    int n= nums.size();
    int sum=0;
    int ap = n*(n+1)/2;
    for(int i=0;i<nums.size();i++){
        sum +=nums[i];
    }
    return ap-sum;
}
int main(){
    vector<int> nums ={1,2,6,3,5,8,0};
    cout<<"the missing number is"<<MissingNumber(nums)<<endl;
}

