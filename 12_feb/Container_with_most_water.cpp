#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector<int>& height) {
    int maxArea = 0;
    //brute force
    // for(int i =0;i<height.size();i++){
    //     for(int j = i+1;j<height.size();j++){
    //         maxArea = max(maxArea, min(height[i],height[j])*(j-i));
    //     }
    // }

    //two pointer approach
    int i=0,j=height.size()-1;
    while(i<j){
        maxArea = max(maxArea, min(height[i],height[j])*(j-i));
        if(height[i] < height[j]) i++;
        else j--;
    }
    return maxArea;
}
int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<< "max area of water container is "<< maxArea(height)<<endl;
}