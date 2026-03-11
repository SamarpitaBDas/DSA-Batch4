#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int largestRectangleArea(vector<int>& heights) {
    int i = 0, j = heights.size()-1, max_area =0;
    while(i<j){
        max_area = max((j-i+1)*min(heights[i],heights[j]),max_area);
        if(heights[i]>heights[j]) i++;
        else j--;
    }
    return max_area;
}
int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    cout << "Largest Rectangle Area: " << largestRectangleArea(heights) << endl;
    return 0;
}