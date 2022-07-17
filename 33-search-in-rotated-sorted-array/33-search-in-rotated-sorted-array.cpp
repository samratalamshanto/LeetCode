class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0; int mid;
        int right=nums.size()-1;
       
      for( left=0;left<=right;left++)   //O(logn)
       {
           mid=left+(right-left)/2;
           if(nums[left]==target) return left;
           if(nums[mid]==target) return mid;
           if(nums[right]==target) return right;
           
           
           if(nums[left]<=nums[mid])  //[4,5,6,7,0,1,2]
           {
               if(target>nums[left] && target<nums[mid]) //not equal mid or left
               {
                   right=mid-1;  //mid-1    
               }
               else if(target<nums[left] && target<nums[mid])
               {
                   left=mid;  //not mid+1 bcz loop increase left end of this. so only left = mid
               }
           }
          else if(nums[left]>nums[mid])  //[5,0,1,2,3,4]
          {
              if(target<nums[left] && target>nums[mid])
              {
                  left=mid;  //same, target=3
              }
              else if(target<nums[mid] && target< nums[left])
              {
                  right=mid;  //target=1
              }
              

          
          
          }
    
       }
        
       
        return -1;
    }
};