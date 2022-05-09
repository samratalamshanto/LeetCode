class Solution {
public:
    string defangIPaddr(string address) {
        string ans="";
        int len = address.length();
        
        for(int i=0;i<len;i++){
            
            if(address[i] == '.'){ //here for one character '' must."" gives err
                ans=ans+"[.]";
            }
            else{
                ans=ans + address[i];
            }
            
        }
        
        
        return ans;
        
    }
};