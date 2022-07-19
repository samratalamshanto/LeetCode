class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       
        vector<vector<int>>ans;
        
        //base case
        vector<int>tmp;
        tmp.push_back(1);
        ans.push_back(tmp);
        tmp.clear();
        if(numRows==1) return ans;
        

        tmp.push_back(1);
        tmp.push_back(1);
        ans.push_back(tmp);
        tmp.clear();
        if(numRows==2) return ans;
        
        for(int i=2;i<numRows;i++)
        {
           for(int j=0;j<=i;j++)
           {
               if(j==0) tmp.push_back(1);
               else if(j==i) tmp.push_back(1);
               else{
                    int res= ans[i-1][j]+ans[i-1][j-1];  // 2D vector 
                    tmp.push_back(res);
                   }
               
           }
            
            ans.push_back(tmp);
            tmp.clear();
        }
        

        
        
        return ans;
    }
};