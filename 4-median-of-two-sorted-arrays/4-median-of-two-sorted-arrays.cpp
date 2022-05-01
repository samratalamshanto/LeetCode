    class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n= nums2.size();
        int mid=(n+m)/2;
        int odd = ((n+m)%2);
        int end = odd? mid : mid+1;
        vector <int> arr;
        double ans=-1;
        int i=0;
        int j=0;


        while(i<m && j<n )  //  merge and short 2 array in one loop 
            // [1,2]  [3,4]
        {
            int t=-1;
            if(nums1[i]>nums2[j])
            {
                
                t=nums2[j];
                j++;

            }
            else
            {
                
                t=nums1[i];
                i++;
            }

            arr.push_back(t);
        }

        while(i<m)     //when nums2 is null
        {
            arr.push_back(nums1[i]);
            i++;

        }
        while(j<n)      //when nums1 is null
        {
            arr.push_back(nums2[j]);
            j++;
        }

        if(odd)
        {
            ans=(double)arr[end];
        }
        else
        {
            ans=((double)arr[mid]+(double)arr[mid-1])/2.0;
        }









        return ans;
    }
};
