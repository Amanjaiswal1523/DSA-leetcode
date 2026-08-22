class Solution {
public:
    int findDuplicate(vector<int>& v) {
        //unordered_set<int>s; 
        //method 1 using sets but here space O(n)
         //for ( int i =0 ; i<nums.size();i++){
           // if ( s.find(nums[i]) != s.end()){
          //   return nums[i];
          //  }
         //   s.insert(nums[i]);
      //  }
       // return -1;
       sort(v.begin(), v.end());
       for ( int i =0 ; i<v.size() -1;i++){
           if ( v[i] ==v[i+1]){
          return v[i];
        }  }
        return -1;
        // we can also use xor method too
      




    }
};