class Solution {
public:
    bool checkIfPangram(string sentence) {
        int len = sentence.length();
        if(len<25){
            return false;
        }
        else{
            map<char,int>m;
            for(auto s: sentence){
                m[s]++;
            }
            return m.size()==26;
            
        }
        
    }
};