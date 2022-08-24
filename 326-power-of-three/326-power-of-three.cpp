class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        
        //logarithm approach
        //n=3^x --- x= log(n)/log(3)
        
//         double x= log(n)/log(3);
        
//   cout<<x<<" " <<ceil(x)<<"  "<<floor(x);
        
        
        
//         if(ceil(x)==floor(x)) return true;
      
//         else return false;
        
        int k=(int)ceil((log(n)/log(3)));  //take ceil of log result #####
        long long l=pow(3,k);
        
        return l==n;
        
    }
};