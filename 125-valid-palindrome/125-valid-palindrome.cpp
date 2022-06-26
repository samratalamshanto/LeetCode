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
   //if single element then i and j points same letter so len must greater than  1
  

      //s=" " so len will be 0 after removing space
    int i=0;
    int j=len-1;
    while(i<=j) //loop with 2 pointer
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