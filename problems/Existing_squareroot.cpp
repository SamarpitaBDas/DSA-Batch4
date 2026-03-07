#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a num";
    cin>>num;
    int mid = num/2;
    int flag = 0;
    for(int i= 1;i<mid;i++){
        if(i*i==num){
            flag = 1;
        }
    } 
    if(flag==0){
        cout<<"square root doesn't exist";
    }
    else{
        cout<<"square root exists ";
    }

}