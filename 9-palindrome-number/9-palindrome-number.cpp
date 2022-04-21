class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        if(x==0) return true;
       long int rev=0;
        long int y=x;
        long int rem;
        while(x>0)
        {                           //121          12             1
            rem= x%10;              //1            2              1
            x=x/10;                 //12           1              0
            rev = rev*10 + rem;      //0*10+1      1*10+2         12*10+1 
        }
      
        if(y==rev){
            return true;
        }
        else 
            return false;
        
    }
};