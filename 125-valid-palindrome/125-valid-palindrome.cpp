class Solution {
public:
  bool isPalindrome(string s)
{
    vector<char>V;

    for(int i=0; i<s.length(); i++)
    {

        if((s[i]>='a' && s[i]<='z')|| (s[i]>='A' && s[i]<='Z')|| (s[i]>='0' && s[i]<='9'))  //remove non alphabetic
        {
            char ch=s[i];
            if(s[i]>='A' && s[i]<='Z')
            {
                ch=tolower(ch); //tolower()

            }
            V.push_back(ch); //store only lowercase char

        } 
        
        

    }
    int len=V.size();
  
    int i=0;
    int j=len-1;
    while(i<=j) 
//loop with 2 pointer. 
//equal used bcz s="a"(palindrome) i and j same and need to go to the loop
    {
        if(V[i]==V[j])
    //palindrome so last letter and first letter must be same and this will go on
        {
            i++;
            j--;
        }
        else //otherwise return false
        {
            return false;
        }
    }
    return true; 

}
};