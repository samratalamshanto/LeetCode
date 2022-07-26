class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>ans;
        map<int,int>m_win;
        map<int,int>m_lost;
        
        for(int i=0;i<matches.size();i++)
        {
            m_win[matches[i][0]]++;  //0 for win
            m_lost[matches[i][1]]++; //1 for lost
        }
        
        vector<int>tmp; // for all win
        vector<int>tmp1; //for 1 lost
        
        for(const auto &mp : m_lost)
        {
            if(mp.second == 1)
            {
                tmp1.push_back(mp.first);
            }
        }
        
        
        for(const auto &mp : m_win)
        {
            int key=mp.first;
            auto x= m_lost.find(key);  //using map find()
            if(x==m_lost.end())  //if it will come end() that means this element not in m_lost
            {
                tmp.push_back(key);
            }

        }
        
 //map auto sorted no need to sort that
        ans.push_back(tmp);
        ans.push_back(tmp1);
        

        return ans;
        
    }
};