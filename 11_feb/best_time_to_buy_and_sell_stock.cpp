#include <iostream> 
#include <vector>
using namespace std;
int maxProfit(vector<int>& nums){
    int min_price=nums[0];
    int max_profit =0;
    for(int i=0;i<nums.size();i++){
        min_price = min(min_price,nums[i]);
        max_profit = max(max_profit,nums[i]-min_price);
    }
    return max_profit;
}
int main(){
    vector<int> nums = {1,2,3,4,2,1,4,7,2,8};
    cout<<maxProfit(nums);
}