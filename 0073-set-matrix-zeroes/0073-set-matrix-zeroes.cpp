class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

       int row = 1;
       int col = 1;


       
//check for the first row if any element in first row is zero then mark the row as zero
       for(int i =0; i< m; i++)
       {
           if(matrix[0][i]==0)
           {
               row = 0;
               break;
           }
          
       }

//check for the first column if any element in first column is zero mark the column as zero
       for(int j = 0; j<n; j++)
       {
           if(matrix[j][0] == 0)
           {
               col =0;
               break;
           }
          
       }

// now check for internal matrix excluding 1st row and 1st col  mark their corresponding 1st element in row and col as zero
       for(int i =1; i< n; i++)
       {
           for(int j =1; j< m; j++)
           {
               if(matrix[i][j] == 0)
               {
                   matrix[i][0]=0;
                   matrix[0][j]=0;
               }
           }
       }
   
   // fill the zero for internal matrix 
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

//seperetely check for row and mark zero 
       if(row == 0)
       {
           for(int i =0; i< m; i++)
           {
              matrix[0][i] = 0;
           }
       }

//seperately check for col and mark zero
       if(col == 0)
       {
           for(int j =0; j< n; j++)
           {
               matrix[j][0] = 0;
           }
       }
        
    }
};