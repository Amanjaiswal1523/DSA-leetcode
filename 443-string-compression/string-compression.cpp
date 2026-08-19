class Solution {
public:
    int compress(vector<char>& chars) {
         int count =1;
         int m =0;
        for( int i =0 ; i< chars.size();i++){
            
            if (  i + 1 < chars.size() && chars[i]== chars[i+1]){
                count ++; 
                }
                else {
                    chars[m] =chars[i];
                    m++;
                      if ( count>1 ) {
                         string num = to_string(count);

                    for (int j = 0; j < num.length(); j++) {
                        chars[m] = num[j];
                        m++;
                    }

                      }

                     count = 1;
                }
                
            } //end 
            return m;
             

        
    }
};