#include <iostream>
#include <vector>
using namespace std;


//using function recursion
// int binarySearch(vector<int> nums, int high,int low, int search){
//     int mid = low + (high-low)/2;
//     if(search<nums[mid]){
//         binarySearch(nums,mid,low,search);
//     }
//     else if(search>nums[mid]){
//         binarySearch(nums,high,mid+1,search);
//     }
//     else if(search ==nums[mid]){
//         return mid;
//     }
// }

//using while loop 
int binarySearch(vector<int> nums,int high,int low,int search){
    int mid = low + (high-low)/2;
    while(low < high ){
        if(search < nums[mid]){
            high = mid;
        }
        else if (search > nums[mid]){
            low = mid+1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    int search = 8;
    int high = nums.size();
    cout << "the target is present in "<< binarySearch(nums,high,0,search);
    return 0;
}