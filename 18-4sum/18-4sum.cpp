class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int len=nums.size();
        vector<vector<int>>ans;
        if(len<4) return ans;
        
        set<vector<int>>S;
        sort(nums.begin(),nums.end());
        int i,j,l,r;
        
        for(i=0;i<len;i++)
        {
            for(j=i+1;j<len;j++)
            {
               long long new_target = target - (long long) (nums[i]+nums[j]);
                
               // long long ---->[1000000000,1000000000,1000000000,1000000000], -294967296

                //now it becomes 2 sum
                
                l=j+1;
                r=len-1;
                
                while(l<r)
                {
                    int sum=nums[l]+nums[r];
                    if(sum==new_target)
                    {
                        S.insert({nums[i],nums[j],nums[l],nums[r]});
                        
                        //increament or decrement only one l or r
                        // not 2 simultinously
                        // if(nums[l]==nums[l+1]) {l++;}
                        // else {r--;}
                        
                        l++; r--;
                    }
                    else if(sum>new_target)  //2sum conditions 
                    {
                        r--;
                    }
                    else{ l++;}
                    
                }
                
                
            }
        }
        if(S.empty()) return ans;
        for(auto i:S)
        {
            ans.push_back(i);
        }
        

        

        return ans;
    }
};