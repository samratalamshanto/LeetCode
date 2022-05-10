class Solution {
public:
    bool isValid(string s) {
        int len= s.length();
        if(len == 1) return false; //'['
        else{
        if(s[0]=='}' or s[0]==']' or s[0]==')' ) return false; //"]"  
        stack <char> stack;
        
        for(int i=0;i<len;i++){
            
            if(s[i]== '(' or s[i]== '{' or s[i]=='['){
                stack.push(s[i]);  
            }
            else if(!stack.empty())   //"(){}]["
            {
                char tmp= s[i];
                if(stack.top() == '(' &&  tmp == ')' )
                {
                    stack.pop();
                }
                else if(tmp == '}'  && stack.top() =='{' )
                {
                    stack.pop();
                }
                else if(tmp == ']' && stack.top() =='[' )
                {
                    stack.pop();
                }
                else 
                {return false;}
            }
            else return false;
 
        }
        if(!stack.empty()) {return false;}
        else {return true;}
            
        }
        
    }
};