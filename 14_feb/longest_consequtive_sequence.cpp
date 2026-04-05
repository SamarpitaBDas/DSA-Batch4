class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int l =0;
        for(int num: s){
            if(s.find(num-1) == s.end()){
                int cn = num; //current number
                int cs = 1;//current streak
                while(s.find(cn+1)!=s.end()){
                    cn++;
                    cs++;
                }
                l = max(l,cs);
            }
        }
        return l;
    }
};