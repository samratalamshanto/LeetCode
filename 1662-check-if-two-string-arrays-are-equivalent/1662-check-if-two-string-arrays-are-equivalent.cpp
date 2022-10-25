class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        bool ans;
        string s1,s2;
        
        for(auto s: word1)
        {
            s1+=s;
        }
        for(auto s:word2)
        {
            s2+=s;
        }
        
        if(s1.size()!= s2.size()) return false;
        
        // sort(s1.begin(),s1.end());
        // sort(s2.begin(),s2.end());
        
        int i,j;
        i=0;j=0;
        
        while(i<s1.size())
        {
            if(s1[i]!=s2[i])
            {
                return false;
            }
            i++;
        }
        
        
        return true;
        
    }
};