class Solution {
public:
    string toLowerCase(string s) {
        for(int i =0;i<s.length();i++){
            int a = s[i]; //the ascii value of character of string 
            if(90 >=a && a >=65){
                //up 65 and low 97 so dif=32
                s[i] = s[i]+32;
            }
        }
        return s;
        
    }
};