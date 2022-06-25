class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        while(num!=0){
            if(num%2==0){  //even 
                count++;
                num=num/2;
            }
            else{
                num=num-1; // odd so substract by 1
                count++;
                
            }
            
        }
        return count;
        
    }
};