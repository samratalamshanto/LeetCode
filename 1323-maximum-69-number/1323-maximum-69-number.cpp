class Solution {
public:
    int maximum69Number (int num) {
        int rem,flag=0,value;
        int res=0;
        stack<int>S;
        while(num!=0){
            rem=num%10;
            S.push(rem); //LIFO so highest value digit of num last in, pop first
            num/=10;
        }
        
    while(!S.empty()){  
        value=S.top();
        S.pop();
        if(value==6 && flag==0){  //first 6 will change to 9
            value=9;
            flag=1;
        }
        res=res*10+value;  //result
    
        
    }
        
        return res;
        
    }
};