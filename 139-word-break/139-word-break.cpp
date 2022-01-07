class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
      int a = s.size();
    
    vector<bool> dp(a+1, false);
        dp[0]=true;
        for(int i=1;i<=a;i++)
        {
            for(auto word: wordDict)
            {
                if(i>=word.size() && dp[i-word.size()])
                {
                    if(s.substr((i-word.size()),word.size()).compare(word)==0)
                    {
                        dp[i]=true;
                        
                    }
                }
            }
        }
        
        return dp[a];
   
           
        
        
    }
};