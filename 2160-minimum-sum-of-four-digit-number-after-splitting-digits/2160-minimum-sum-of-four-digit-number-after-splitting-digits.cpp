class Solution {
public:
    int minimumSum(int num) {
        vector <int> v;
        while(num!=0){
           int n = num%10;
            v.push_back(n);
            num= num/10;
        }
      sort(v.begin(),v.end());
        
        return (v[0]*10+v[1]*10+v[2]+v[3]); 
        //4 digit and sorted 
        // so first 2 sorted digit*10 and other 2 are added 
        // this is the minimal
    }
};