// #include <iostream>
// #include <vector>
// using namespace std;
// int Sec_height(vector<int> & nums){
//     if(nums.size() < 2){
//         return -1;
//     }

//     int max_n = nums[0];
//     int sec_high = INT_MIN;

//     for(int i = 1; i < nums.size(); i++){
//         if(nums[i] > max_n){
//             sec_high = max_n;
//             max_n = nums[i];
//         }
//         else if(nums[i] > sec_high && nums[i] != max_n){
//             sec_high = nums[i];
//         }
//     }

//     return sec_high;
    
// }
// int main(){
//     vector<int> nums ={1,2,3,4,5,6,2,5,1,78,90};
//     cout<< "second highest number is " << Sec_height(nums)<< endl;
//     return 0;
// }

// geeks for geeks submission
class Solution {
  public:
  int sum(vector<int> & arr){
      int sum =0;
      for(int i=0;i<arr.size();i++){
          sum+=arr[i];
      }
      return sum;
  }
    int getSecondLargest(vector<int> &arr) {
        //base case - 1 if all equal return -1
        if((arr[0]*arr.size()) == sum(arr)) return -1;
        //base case 2 if contains only 1 element
        if(arr.size() < 2) return -1;
        
        int highest;
        int sec_highest;
        for(int i=0;i<arr.size();i++){
            if(highest<arr[i] ){
                sec_highest = highest;
                highest = arr[i];
            }
            else if(arr[i]>sec_highest && arr[i]!=highest){
                sec_highest = arr[i];
            }
        }
        return sec_highest;
    }
};