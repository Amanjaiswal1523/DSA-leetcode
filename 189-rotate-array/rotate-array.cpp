class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i = 0;
int j = nums.size() - 1;
k = k % nums.size();

while (i < j) {
    swap(nums[i], nums[j]);
    i++;
    j--;
} //reverse an array 

int n=0;
int m =k-1;
while( n<m){
    swap(nums[n], nums[m]);
    n++;
    m--;

}//reverse 1st part 


int x= k;
int z=nums.size()-1;
while( x<z){
    swap(nums[x], nums[z]);
    x++;
    z--;
}
        
    }
};