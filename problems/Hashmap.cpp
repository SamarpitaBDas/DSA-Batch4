#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int CharCount(vector<char> &name){
    unordered_map<char,int> Lookup;
    char key = 'a';

    for(char c : name){
        Lookup[c]++;
    }

    return Lookup[key];
}

int main(){
    vector<char> name = {'s','a','m','a','r','p','i','t','a'};
    int val = CharCount(name);

    cout << val;

    return 0;
}
