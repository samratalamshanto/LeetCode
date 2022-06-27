class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int res;
        set<int>set1;
        vector<int> ans;  //vector
        map<int,int> mp; //map---ordered,less memory 
        int n=ceil(nums.size()/3); //condition
        int i=0;
        while(i<nums.size()){
            mp[nums[i]]++; //count value
            if(mp[nums[i]] > n){
               set1.insert(nums[i]); //insert set so no duplicate value
            }
            
            i++;
        }
        ans.assign(set1.begin(),set1.end());  //assign set value into vector
        return ans;
        
    }
};