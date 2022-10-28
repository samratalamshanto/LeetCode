class Solution {
public:
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        int len=strs.size(); 
        
        if(len==1 && strs[0]=="")
        {
            vector<string>tmp;
            tmp.push_back("");
            ans.push_back(tmp);
            return ans;
        }
        else if(len==1)
        {
            vector<string>tmp;
            tmp.push_back(strs[0]);
            ans.push_back(tmp);
            return ans;
        }
        
        map<string,vector<string>>m;
        
        for(auto str:strs)
        {
            string t=str;    //important part### store value
            sort(str.begin(),str.end());  //important part###
            m[str].push_back(t);    //important part###
        }
        
        for(auto t:m)
        {
            ans.push_back(t.second);
        }
       
        
        return ans;
        
    }
};