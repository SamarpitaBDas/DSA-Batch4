#include <iostream>
#include <vector>
#include <set>
using namespace std;
bool containsDuplicate(vector<int>& nums){
    //can use hashset check if elem exists and return true
    set<int> Visit;
    for(int i: nums){
        if(Visit.find(i)!=Visit.end()){
            return true;
        }
        Visit.insert(i);
    }
    return false;

}
int main(){
    vector<int> nums = {1,2,3,1};
    cout << containsDuplicate(nums);
}