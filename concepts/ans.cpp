#include <iostream>
#include <vector>
using namespace std;
// print sum product
void print(vector<int> & nums ){

}
int sum(vector<int> & nums, int index){
    if (index < 0) {
        return 0;
    }
    return nums[index] + sum(nums, index - 1);
}

int product(vector<int> & nums, int index){
    if (index < 0) {
        return 1;
    }
    return nums[index] * product(nums, index - 1);
}

int main(){
    vector<int> nums = {1,2,3};
    cout << sum(nums,3);
    cout<<product(nums,3);
}