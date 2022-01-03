class Solution {
public:
    string intToRoman(int num) {
        string ans;
        int tmp;
        
      int a[13] ={1000,900,500,400,100,90,50,40,10,9,5,4,1};
   string s[13]= {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    
        for(int i=0;i<13;i++)
        {
            if(num>=a[i])
            {
                tmp= num/a[i];
                for(int j=0;j<tmp;j++)
                {
                    ans=ans+s[i];
                }
                num=num-a[i]*tmp;
            }
           
        }
        
        
        
        
        
        
        return ans;
        
        
    }
};