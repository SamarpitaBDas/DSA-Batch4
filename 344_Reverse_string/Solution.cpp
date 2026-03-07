#include <iostream>
#include <vector>
using namespace std;
vector<char> reverseString(vector<char>&s){
    int l=0,r=s.size()-1;
    while(l<r){
        char t = s[l];
        s[l++]=s[r];
        s[r--]=t;
    }
    return s;
}
int main(){
    vector<char> s = {"h","e","l","l","o"};
    vector<char> ans = reverseString(s);
    for(int i=0;i<ans.size();i++){
        cout<<s[i];
    }
    return 0;
}