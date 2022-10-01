class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int>var;
        int row=matrix.size();
        int col=matrix[0].size();
        
        int starting_row=0;
        int starting_col=0;
        int ending_row=row-1;
        int ending_col=col-1;
        int count =0;
        int total = row*col;
        
        
        while(count < total)
        {
           //starting row
            for(int i = starting_row; count<total && i<=ending_col;i++)
            {
                var.push_back(matrix[starting_row][i]);
                count++;
            }
            starting_row++;
            //for ending_col
            for(int i=starting_row;count<total && i<=ending_row;i++)
            {
                var.push_back(matrix[i][ending_col]);
                    count++;
            }
            ending_col--;
            //ending_row
            for(int i=ending_col;count<total && i>=starting_col;i--)
            {
                var.push_back(matrix[ending_row][i]);
                    count++;
            }
            ending_row--;
            //staring col
            for(int i=ending_row;count<total && i>=starting_row;i--)
            {
                var.push_back(matrix[i][starting_col]);
                count++;
            }
            starting_col++;
        }
        return var;
    }
};
