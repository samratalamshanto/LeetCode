class Solution {
public:
    
    //O(n+k)  //n wirds svector size 
    //k words's word length
        vector<int> getPattern(string word)
        {
            if(word.size()==0)
            {
                return {};
            }
            
            vector<int> res;
            int indx=0;  //get this int value to track new unique char
            //prev char so same indx
            //new char new indx
            
           
            unordered_map<char,int> mp;

            for(int i=0;i<word.size();i++)
            {
                
                if(mp.find(word[i]) == mp.end())  //not found
                {
                    mp.insert({word[i],indx}); //insert char, and indx
                    indx++; //increase the indx value
                
                   
                    res.push_back(mp[word[i]]);
                }
                else
                {  //found so get that char's  value and push taht 
                    res.push_back(mp[word[i]]);
                    
                }
            
            }

            
            return res;
        }

    
    
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        vector<int> v = getPattern(pattern);  //get int pattern
        
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        
        for(int i=0;i<words.size();i++)
        {
            vector<int> x= getPattern(words[i]); //get int pattern
            
            if(x==v) ans.push_back(words[i]);  //pattern match
        }

        
        return ans;
    }
};