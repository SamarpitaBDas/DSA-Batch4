#include <iostream>
#include <vector>
using namespace std;
vector<int> sortColors(vector<int>& colors){
    //count num of 0s,1s,2s
    int c0=0,c1=0,c2=0;
    for(int num: colors){
        if(num==0) c0++;
        else if (num ==1) c1++;
        else c2++;
    }
    //place elems one by one
    for(int i=0;i<c0;i++){
        colors[i]=0;
    }
    for(int i=c0;i<c0+c1;i++){
        colors[i]=1;
    }
    for(int i=c0+c1;i<c1+c2+c0;i++){
        colors[i]=2;
    }
    return colors;
}
int main(){
    vector<int> colors = {2,0,2,1,1,0};
    sortColors(colors);
    for(int i=0;i<colors.size();i++){
        cout << colors[i];
    }
}