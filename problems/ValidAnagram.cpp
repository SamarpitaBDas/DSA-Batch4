#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
bool validAnagram(string s,string t){
    unordered_map<char,int> an;
    for(char ch: s){
        an[ch]++;
    }
    for(char ch:t){
        an[ch]--;
    }
    for(auto& pair: an){
        if(pair.second !=0){
            return false;
        }
    }
    return true;

}
int main(){
    string s ="anagram";
    string t = "nagaram";
    cout << "the given two strings are "<<validAnagram(s,t)<<endl;
    return 0;
}