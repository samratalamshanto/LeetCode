class Solution {
public:
    int lengthOfLastWord(string s) {
       int count=0;
        
        for(int i=s.length()-1;i>=0;i--){ 
            //last word len so loop will go last to start
            if(s[i]!=' ') count++;  // when no ' ' count++
            else if(count>0 && s[i]==' '){ 
            //when count>0 means last word counted, ans we got the second last word
                break; //break the loop
            }
            
            
     
        }
        return count;
        
    }
};