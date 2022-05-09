class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int result=-1000;
        
        for(int i=0;i<sentences.size();i++){
            int tmp=0;
// sentences[i].size() gives total character of a sentence. not all words size
             for(int j=0;j<sentences[i].size();j++){
                if(j== sentences[i].size()-1 or sentences[i][j]==' '){
                    tmp+=1;
                }
            }
            if(tmp>result){
                result=tmp;
            }
            
            }
        return result;
        }
        
    
};