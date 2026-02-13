#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector<int>& height) {
    int ma = 0;
    int i=0;
    int j= height.size() -1;
    while(i<j){
        int curr_ma = min(height[i],height[j])*(j-i);
        ma = max(ma,curr_ma);
        if(height[i]>height[j]) j--;
        else i++;
    }
    return ma;
}
int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(height);
}
