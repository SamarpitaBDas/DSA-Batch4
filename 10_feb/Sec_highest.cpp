//geeks for geeks submission
class Solution {
  public:
  int sum(vector<int> & arr){
      int sum =0;
      for(int i=0;i<arr.size();i++){
          sum+=arr[i];
      }
      return sum;
  }
    int getSecondLargest(vector<int> &arr) {
        //base case - 1 if all equal return -1
        if((arr[0]*arr.size()) == sum(arr)) return -1;
        //base case 2 if contains only 1 element
        if(arr.size() < 2) return -1;
        
        int highest;
        int sec_highest;
        for(int i=0;i<arr.size();i++){
            if(highest<arr[i] ){
                sec_highest = highest;
                highest = arr[i];
            }
            else if(arr[i]>sec_highest && arr[i]!=highest){
                sec_highest = arr[i];
            }
        }
        return sec_highest;
    }
};