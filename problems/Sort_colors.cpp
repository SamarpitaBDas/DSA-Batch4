#include <iostream>
#include <vector>
using namespace std;
vector<int> sortColors(vector<int> & colors){
    int c0=0,c1=0,c2=0;
    //count 0s ,1s 2s
    for(int i=0;i<colors.size();i++){
        if(colors[i]==0){
            c0++;
        }
        else if(colors[i]==1){
            c1++;
        }
        else{
            c2++;
        }
    }
    //place in array
    for(int i=0;i<c0;i++){
        colors[i]=0;
    }
    //place 1 in array
    for(int i=c0;i<(c0+c1);i++){
        colors[i]=1;
    }
    //place 2s in array
    for(int i=(c0+c1);i<(c2+c0+c1);i++){
        colors[i]=2;
    }
    return colors;
}
int main(){
    vector<int> colors ={2,0,2,1,1,0};
    vector<int> res = sortColors(colors);
    for(int i=0;i<res.size();i++){
        cout<<colors[i];
    }
    return 0;
}