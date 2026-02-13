#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
//optimized version
vector<int> twoSum(vector<int> & nums, int target){
    unordered_map<int,int> NumMap;
    for(int i=0;i<nums.size();i++){
        int c = target - nums[i];
        if(NumMap.find(c)!= NumMap.end()){
            return {NumMap[i],i};
        }
        NumMap[i]=i;
    }
    return {};
}
// vector<int> twoSum(vector<int> & nums, int target){
//     for(int i=0;i<nums.size();i++){
//         int c= target-nums[i];
//         for(int j=0;j<nums.size();j++){
//             if(nums[j]==c){
//                 return {i,j};
//             }
//         }
        
//     }
//     return {};


// }

int main(){
    vector<int> nums ={1,2,3,4,5,6};
    int target = 9;
    vector<int> res = twoSum(nums,target);
    for(int i=0;i<res.size();i++){
        cout<< res[i];
    }
}