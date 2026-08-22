class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        
        set<vector<int>> s;//copy past ai

        for ( int i =0 ; i <nums.size();i++){
            int j =i+1;
            int n = nums.size() -1;
            int tar = -( nums[i]);
            while (j < n){
            if ( nums[j] +nums[n] == tar){
                 s.insert({nums[i], nums[j], nums[n]});//also copy past as i dont know ho to inteert in set 
                    j++;
                    n--;

            }
            else if ( nums[j] +nums[n] < tar){
                j++;

            }
            else {
                n--;
            } }

        }
         return vector<vector<int>>(s.begin(), s.end());

    }
};