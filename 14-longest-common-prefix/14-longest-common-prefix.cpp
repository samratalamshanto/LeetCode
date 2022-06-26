class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int len=strs.size();
        int  min =0;
        
        for(int i=0;i<len;i++){   //find the min length 
           if(i==0){
                min=strs[0].size();
            }
            if(min>strs[i].size()){
                min = strs[i].size();
            }
        }
        
        for(int i=0;i<min;i++){   //loop over min length
            char ch=strs[0][i];   //take first str first letter to check 
            for(int j=1;j<len;j++){ //loop over whole strs
                if(ch!=strs[j][i]){  //if ch not equal strs[j][i] then return
                    return ans;
                }
                else continue;
            }
             ans+=ch; //after loop we will add that ch means it has in all strs
        }

        
        
        
        return ans;
        
    }
};