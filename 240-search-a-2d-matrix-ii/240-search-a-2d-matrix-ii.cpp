class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();  //row
        int n=matrix[0].size(); //col
        
        if(matrix[0][0]==target) return true;
        
        int i=0; //1st row
        int j=n-1; //last element 
        
        while(j>=0 && i<m)
        {
            if(matrix[i][j]==target)
            {
                return true;
            }
            else if(matrix[i][j]>target)
            {
                j--;
                
            }
            else if(matrix[i][j]<target)
            {
                i++;
            }
        }
        
        //we need to found the range of the target bcz col and row are sorted accending
        //not need to loop over full matrix
        
        
        return false; //if not find in the loop
        
    }
};