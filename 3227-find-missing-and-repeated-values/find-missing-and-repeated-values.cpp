class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int> s; 
        int n = grid.size();
        int a;
        //finding a
        for ( int i =0 ; i<n; i++){
            for ( int j =0 ; j<n;j++){
                if ( s.find (grid [i][j]) != s.end()){
                   a= grid [i][j];
                    break;
                }
                s.insert(grid[i][j]);

            }
        } //end of finding a
        int z =n*n; 
        int actual = (z*(z+1))/2;

        int given =0; 
        for ( int i =0 ; i<n; i++){
            for ( int j =0 ; j<n;j++){
                given =given +grid [i][j];
                 }
        }
        int b = actual -given +a;
        return {a, b};



        
    }
};