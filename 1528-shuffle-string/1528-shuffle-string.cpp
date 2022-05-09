class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int len= indices.size();
        string result=s; //same size string are taken
        for(int i=0;i<len;i++){
            result[indices[i]] =s[i];   // then replace them with correct ones
        }
        return result;
        
    }
};