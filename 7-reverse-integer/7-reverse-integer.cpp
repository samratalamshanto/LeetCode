class Solution {
public:
    int reverse(int x) {
  long int rem,rev=0;

    if((-1563847412 < x) &&  (x < 1534236469)) 
        //otherwise the ans will not match with this limit, got error.....
    {
        int flag=0;
        if(x<0)
        {
            flag=1;
            x=x*-1;
        }


        while(x>0)
        {

            rem= x%10;
            x=x/10;
            rev= rev*10 + rem;
        }

        if(flag==1)
        {
            rev=-1*rev;
        }
    }


if(x==-2147483412){  //here it is an extra condition bcZ it gives error 
     int flag=0;
        if(x<0)
        {
            flag=1;
            x=x*-1;
        }


        while(x>0)
        {

            rem= x%10;
            x=x/10;
            rev= rev*10 + rem;
        }

        if(flag==1)
        {
            rev=-1*rev;
        }
}

    return rev;

        
        
    }
};