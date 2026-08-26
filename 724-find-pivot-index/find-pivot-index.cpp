class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>sum(nums.size());
         sum[0]=nums[0];
         for ( int i =1; i <nums.size();i++){
            sum[i]=sum[i-1] +nums[i];

        }
        int tsum= sum[sum.size()-1];
        

            for ( int k =0; k<nums.size();k++){
              if ( sum[k] - nums[k] == tsum - sum[k]){
                return k;
              }
            }

        return -1;
    }
};