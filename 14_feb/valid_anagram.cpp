#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
bool isAnagram(string s, string t){

    //using hashmap
    // //base case 
    // if(s.size()!=t.size()) return false;
    // unordered_map<char,int> mp;
    // for(int i=0;i<s.size();i++){
    //     mp[s[i]]++;
    //     mp[t[i]]--;
    // }
    // for(auto& pair: mp){
    //     if(pair.second!=0) return false;
    // }
    // return true;


    //using vector
    //base case
    if(s.size()!=t.size()) return false;
    vector<int> count(26,0);
    for(int i=0;i<s.size();i++){
        count[s[i]-'a']++;
        count[t[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(count[i]!=0) return false;
    }
    return true;
}
int main(){
    string s,t;
    cout<<"Enter the first string: ";
    cin>>s;
    cout<<"Enter the second string: ";
    cin>>t;
    if(isAnagram(s,t)){
        cout<<"The strings are anagrams."<<endl;
    }else{
        cout<<"The strings are not anagrams."<<endl;
    }
    return 0;
}