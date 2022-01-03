class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a=nums.size();
        int i,j,k,m=-1,n=-1,flag=0;
        i=0; k=a-1;
        int t=a;
        vector <int> tmp;

        
        
        while(t)
        {
            if(nums[i]<target)
            {
                i++; 
            
            }
            else if(nums[i]==target)
            {
                m=i;
                
            }
            if(nums[k]>target)
            {
                k--;
            }
            else if(nums[k]==target)
            {
                n=k;
              
            }
            
            t--;
        }
        
        tmp.push_back(m);
        tmp.push_back(n);
        
        
        return tmp;
        
    }
};