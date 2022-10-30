class Solution {
public:
    void dfs(vector<vector<int>>& rooms, int node,vector<bool>&v)
    {
        v[node]=true;
        for(int i=0;i<rooms[node].size();i++)
        {
            if(v[rooms[node][i]]==false)
            {
                dfs(rooms,rooms[node][i],v);
            }
        }
    }
    
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n= rooms.size();
        vector<bool>v(n,false);
        
        dfs(rooms,0,v);
        
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        
       for(int i=0;i<v.size();i++)
       {
           if(v[i]==false) return false;
       }
        
        return true;
    }
};