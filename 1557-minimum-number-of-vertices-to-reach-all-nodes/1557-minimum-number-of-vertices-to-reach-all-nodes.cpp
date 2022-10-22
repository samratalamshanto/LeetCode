class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>ans;
        
        //if we found InDegree of nodes 0
        //then we add them will give us the ans
        //Important Term is INDEGREE, how much nodes are In that node from other nodes
        
        vector<int>graphInDegree(n,0);
        
        for(int i=0;i<edges.size();i++)
        {
            graphInDegree[edges[i][1]]=+1;
        }
        
        for(int i=0;i<graphInDegree.size();i++)
        {
            if(graphInDegree[i]==0)
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};