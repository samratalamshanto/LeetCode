class Solution {
public:
    int balancedStringSplit(string s) {
      
        int len=s.length();
        if(len<=1) return 0;
        map <char,int> m;     //map
        int ans=0;
        
        for(int i=0;i<len;i++){
            char c=s[i];
            m[c]++;         //character counting
            if(m['R'] == m['L']){    
        //### when character counting, we will check if they equal?
                ans++;
            }
            
        }

        return ans;
    }
};