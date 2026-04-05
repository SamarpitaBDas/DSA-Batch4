#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
//return the number of subarrays with sum == k 
int subarraySum(vector<int>& num, int k){
    unordered_map<int, int> ps;
    ps[0]=1;
    int s=0,c=0;
    for(int nums:num){
        s+=nums;
        if(ps.find(s-k)!=ps.end()){
            c+=ps[s-k];
        }
        ps[s++];

    }
    return c;

}
int main(){
    vector<int> num = {1,1,1};
    int k=2;
    cout<<subarraySum(num,k);
}