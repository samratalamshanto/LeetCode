class Solution {
public:
    int xorOperation(int n, int start) {
     int nums[n];
        int res;
        for(int i=0;i<n;i++){
            nums[i]= start + 2*i; 
        }
        res=nums[0];  //initialize with first value of the array
        for(int i=1;i<n;i++){
            res= res ^ nums[i]; //xor ^ operation
        }
        return res;
    }
};