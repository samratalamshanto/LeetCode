class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = size(nums1);
        int len2 = size(nums2);
        int len = len1+len2;
        double sum=0;
        if( len1>=len2){
            for(int i=0;i<len2;i++){
                nums1.push_back(nums2[i]);
            }
            sort(nums1.begin(),nums1.end());
            if(len%2==0){
             sum = (nums1[(len/2)-1]+nums1[(len/2)])/2.0;
            }
            else sum=nums1[(len/2)];
            
        }
        else if(len2>len1)
        {
            for(int i=0;i<len1;i++){
                nums2.push_back(nums1[i]);
            }
            sort(nums2.begin(),nums2.end());
            if(len%2==0){
            sum = (nums2[(len/2)-1]+nums2[(len/2)])/2.0;
            }
            else sum=nums2[(len/2)];
        }
        
        return sum;
    }
};