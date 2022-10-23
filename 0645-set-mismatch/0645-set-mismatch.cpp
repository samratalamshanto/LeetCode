class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        map<int,int>m;
        int frst, sec;
        
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        for(auto &it:m) 
        {
            if(it.second ==2) frst=it.first;
        }
        
        for(int i=1;i<=nums.size();i++)
        {
            if(m[i]==1) continue;
            else if(m[i]==0) sec=i;
        }
        
        ans.push_back(frst);
        ans.push_back(sec);
        
        
        return ans;
        
    }
};