class Solution {
public:
   bool isValid(int i,int j,int col,int row,vector<vector<char>>& grid){
       if(i>=0 && i<row && j>=0 && j<col && grid[i][j]=='1'){
           return true;  //valid
       }
       
       return false; //not valid or out of the box
   }
   void numIslandsRec(int i,int j,int col,int row,vector<vector<char>>& grid){
       grid[i][j]='0';  //didnt use visited array. just simply make 0 to avoid
       
       // 4 adjacent positions 
       
       if(isValid(i+1,j,col,row,grid)){
           numIslandsRec(i+1,j,col,row,grid);
       }
       
       if(isValid(i-1,j,col,row,grid)){
           numIslandsRec(i-1,j,col,row,grid);
       }
       
       if(isValid(i,j+1,col,row,grid)){
           numIslandsRec(i,j+1,col,row,grid);
       }
       
       if(isValid(i,j-1,col,row,grid)){
           numIslandsRec(i,j-1,col,row,grid);
       } 
       
   }
    
    int numIslands(vector<vector<char>>& grid) {
       int row =grid.size();
        int col= grid[0].size();
        int i,j,ans=0;
        
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    ans++;
                    numIslandsRec(i,j,col,row,grid);
                    
                }
            }
        }
        
        return ans;
        
    }
};