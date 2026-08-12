class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int left =1;
          int right  =1;
          int ans =nums[0];
          int i=0;
          int j =nums.size()-1;
          while( i < nums.size() ) {
            left =left*nums[i];
            right=right*nums[j];
            ans = max(ans, max(left, right));
            if ( nums[i]==0) {
                left=1;
            }
             if ( nums[j]==0) {
                right =1;
            }
            i++;
            j--;
          }
          return ans;

        
    }
};