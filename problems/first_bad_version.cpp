#include <iostream>
#include <vector>
using namespace std;
bool isBadVersion(int n){
    if(n>=4){
        return true;
    }
    return false;
}
int firstBadVersion(int n){
    int l = 1, r =n,m=n;
    while(l<=r){
        m = l+(r-l)/2;
        if(isBadVersion(m)){
            r=m;
        }
        else{
            l=m+1;
        }
    }
    return l;
}
int main(){
    int n = 5;
    cout << firstBadVersion(n);
    return 0;
}