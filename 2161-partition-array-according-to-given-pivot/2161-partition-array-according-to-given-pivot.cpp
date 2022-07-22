class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>left; //less than pivot
        vector<int>right; //greater than pivot
        int count=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                left.push_back(nums[i]);
            }
            else if(nums[i]>pivot)
            {
                right.push_back(nums[i]);
            }
            else{
                count++;  //equal to pivot
            }
        }
        
        //now insert the pivot 
        for(int i=0;i<count;i++)
        {
            left.push_back(pivot);
        }
        
        //merge the arrays
        left.insert(left.end(),right.begin(),right.end());
        
        return left;
    }
};