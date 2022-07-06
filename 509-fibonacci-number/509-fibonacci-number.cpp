class Solution {
public:
    int fib(int n) 
    {
        int sum=0;
  //extra memory save by not using arr[n+1]

 //use 3 tmp variable to store them 
        
        if(n<=1) return n;
        int prev=0;
        int prev1=1;

        for(int i=2;i<=n;i++)
        {
        int tmp;
        sum = prev+ prev1;
        tmp=prev1; 
        prev1= sum;
        prev= tmp;
        }
        
        
        
        return sum;
        
    }
};