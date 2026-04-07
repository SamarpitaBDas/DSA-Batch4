#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(int l, int r, string s){
        while(l<r){
            if(s[l++]!=s[r--]) return false;
        }
        return true;
    }
    void solve(vector<vector<string>> ans, vector<string> tmp, string s, int idx){
        if(idx == s.size()) {
            ans.push_back(tmp);
            return;
        }
        for(int j = idx;j<s.size();j++){
            if(isPalindrome(idx,j,s)){
                tmp.push_back(s.substr(idx,j-idx+1));
                solve(ans,tmp,s,j+1);
                tmp.pop_back();
            }
        }

    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans; vector<string> tmp;
        solve(ans,tmp,s,0);
        return ans;
    }
};
int main(){
    string s = "aab";
    Solution sol;
    vector<vector<string>> result = sol.partition(s);
    cout << "Palindrome partitions of \"" << s << "\":" << endl;
    for (const auto& partition : result) {
        cout << "[";
        for (const auto& str : partition) {
            cout << "\"" << str << "\" ";
        }
        cout << "]" << endl;
    }
    return 0;
}