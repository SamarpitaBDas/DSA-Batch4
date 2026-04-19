#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int leastInterval(vector<char>& tasks, int n) {
    unordered_map<char, int> hm;
    for(int ch: tasks){
        hm[ch]++;
    }
    //max frequency
    int mF = 0;
    for(auto& pair: hm){
        mF= max(pair.second,mF);
    }
    int mC=0;
    for(auto& pair: hm){
        if(pair.second==mF){
            mC++;
        }
    }
    // int pF = 0 ;
    int size = tasks.size();
    int ans = max(size,(mF-1)*(n+1)+mC);
    return ans;
}
int main(){
    vector<char> tasks ={'A','A','A','B','B','B'};
    int n = 2;
    cout<<leastInterval(tasks,n)<<endl;
    return 0;
}