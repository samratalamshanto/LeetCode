class Solution {
public:
    // void Helper(double &sum,)
    
    
    double myPow(double x, int n) {
        double sum=1;
        long long int m=n;
        
        if(n==0) return sum;
        if(x==1.0) return sum;
        if(m<0)
        {
            m = -m ;
            x=1/x;
        }
        
       
       
        
        
        
        return (m%2==0)? myPow(x*x, m/2): x*myPow(x*x, m/2);
    }
};