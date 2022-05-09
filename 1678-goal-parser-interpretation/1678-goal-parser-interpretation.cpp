class Solution {
public:
    string interpret(string command) {
        int i=0;
        int j=1;
        string ans="";
        while(j<=command.length() and i<=command.length()){  
            // remember here "and" nedded if use "or" time limit exceeded
            if(command[i]=='G'){
                ans+='G';
                i++;
                j++;
            }
            else if(command[i]=='(' && command[j]==')'){
                ans += 'o';
                i=i+2;
                j=j+2;
            }
            else if(command[i]=='(' && command[j]=='a'){
                ans+="al";
                i=i+4;
                j=j+4;
            }
        }
       return ans; 
    }
};