class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string , vector<string>> umap;
        
        for(auto x: strs)
        {
            string tmp = x;
            sort(x.begin(), x.end());
            umap[x].push_back(tmp);
        }
        
        for(auto x: umap)
        {
            vector <string >tmp = x.second;
            ans.push_back(tmp);
        }
        
        return ans;
        
    }
};