#include <iostream>
#include <vector>
using namespace std;
int longestOnes(vector<int>& nums, int k) {
    // int c = 0;
    // int max_c = 0;
    // for(int i=0;i<nums.size();i++){
    //     if(nums[i]==1){
    //         c++;
    //     }
    //     else {
    //         c =0;
    //     }
    //     max_c = max(c,max_c);
    // }
    // return max_c+k;

    int i=0, j= 0, n = nums.size(),curr_sum =0,ans = 0, sum =0;
    //base case
    for(int num: nums){
        sum+=num;
    }
    if((n-sum)<k) return n;
    //main case
    while(j<n){
        curr_sum +=nums[j];
        //shrinking 
        if(((j+i-1)-curr_sum) > k ){
            curr_sum -= nums[i];
            i++;
        }
        else if (((j+i-1)-curr_sum) == k){
            ans = max(ans,j+i-1);
        }
        j++;
    }
    return ans;
}
int main(){
    int n,k;
    cin >> n >> k;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    cout << longestOnes(nums,k) << endl;
    return 0;
}