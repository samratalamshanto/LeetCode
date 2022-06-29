class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        for(int i=1;i<=num/2;i++){ //here num/2 otherwise time limit exceed 
            if(num%i==0)
            {
                sum=sum+i;
            }
        }
        return (sum==num);
    }
};