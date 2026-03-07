#include <iostream>
#include <vector>
using namespace std;
int BinaryConversion(int num){
    vector<int> res;
    while(num){
        res.push_back(num%2);
        num = num/2;
    }
    return numofones(res);
}
int numofones(vector<int> B){
    int count = 0;
    for(int i=0;i<B.size();i++){
        if(count == 1 ){
            count ++;
        }
    }
    return count;
}
vector<int> sortByBits(vector<int>& arr) {
    unordered_map<int,int> res;
    for(int i=0;i<arr.size();i++){
        res[arr[i]] = BinaryConversion(arr[i]);
    }

    
}
int main(){
    int n;
    cin >> n;
    vector<int> res = BinaryConversion(n);
    for(int i = res.size()-1; i >= 0; i--){
        cout << res[i];
    }
    cout << endl;
    return 0;
}