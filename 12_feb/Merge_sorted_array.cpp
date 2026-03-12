#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> & nums1,int m,vector<int>& nums2, int n){
    int i=m-1,j=n-1,k=m+n-1;
    while(j>=0){
        if(i>=0 && nums1[i]>nums2[j]) nums1[k--] = nums1[i--];
        else nums1[k--] = nums2[j--];
    }
}
int main(){
    vector<int> nums1 = {1,2,3,0,0,0}, nums2 = {2,5,6};
    merge(nums1,nums1.size(),nums2,nums2.size());
    for(int i =0;i<nums1.size();i++){
        cout << nums1[i];
    }
}