class Solution {
public:
    static bool compare(string &s1,string &s2)
    {
    return s1.size() < s2.size();
    }
    int longestStrChain(vector<string>& words) {
        int res=1;
        sort(words.begin(),words.end(),compare);
        // for(int i=0;i<words.size();i++){
        //     cout<<words[i]<<" ";
        // }
        map<string,int> m;
        for(int i=0;i<words.size();i++){
            m[words[i]]=1;
            cout<<words[i]<<" "<<m[words[i]]<<" ";
            string a=words[i];
            for(int j=0;j<a.length();j++){
                string c=a;
                string b=c.erase(j,1);
                // cout<<b<<"* ";
                if(m.find(b)!=m.end()){
                    // m[words[i]]=max(m[words[i]],m[b]);
                    m[words[i]]=max(m[words[i]],m[b]+1);
                    res=max(res,m[words[i]]);
                    // cout<<res<<"# ";
                }
            }
        }
        return res;
    }
};
