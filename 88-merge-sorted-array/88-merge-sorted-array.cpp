class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m;
        int j=0;
        while(i<nums1.size())
        {
           nums1[i]=nums2[j];  //nums1's 0 will be replaced by nums2 values
            j++;
            i++;
        }
        sort(nums1.begin(),nums1.end());//then sort them
        
    }
};