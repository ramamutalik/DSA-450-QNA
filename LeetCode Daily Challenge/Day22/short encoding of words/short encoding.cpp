class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
            sort(words.begin(), words.end(), []
            (const string& first, const string& second){
            return first.size() > second.size();
            });
            int ans=0;
        unordered_map<string,int> m;
        for(int i=0;i<words.size();i++){
            m[words[i]]++;
        }
        for(int i=0;i<words.size();i++){
            int k=words[i].length();
            if(m[words[i]]>0){
                ans+=(k+1);
            }
            for(int j=k-1;j>=0;j--){
                string s=words[i].substr(j,j-k);
                if(m[s]){
                    m[s]=0;
                }
            }
        }
        return ans;
        
        
    }
};
