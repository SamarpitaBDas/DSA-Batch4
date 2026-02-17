#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int subarraySum(vector<int> &nums, int k){
    int sum =0, count =0;
    unordered_map<int, int> mp;
    //base case 
    mp[0]=1;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(mp.find(sum-k)!=mp.end()){
            //count shall be incremented by the frequency in map 
            count+=mp[sum-k];
        }
        mp[sum]++;
    }
    return count;
}
int main(){
    vector<int> nums = {1,2,3};
    int k = 3;
    cout<<"the max number of subarray that equals k is "<< subarraySum(nums,k);
    return 0;
}