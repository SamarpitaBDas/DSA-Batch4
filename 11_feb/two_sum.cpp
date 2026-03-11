//LEETCODE
//brute force approach
for(int i=0;i<nums.size();i++){
        for(int j =i+1;j<nums.size();j++){
            if(nums[i]+nums[j]== target){
                return {i,j};
            }
        }
    }
    return {};
}
//hashmap approach
unordered_map<int,int> N;
for(int i=0;i<nums.size();i++){
    int c = target-nums[i];
    if(N.find(c)!=N.end()){
        return {N[c],i};
    }
    N[nums[i]]=i;
}
return {};


