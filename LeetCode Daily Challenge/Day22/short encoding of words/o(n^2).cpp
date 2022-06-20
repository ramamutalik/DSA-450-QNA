class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        sort(words.begin(), words.end(), []
    (const string& first, const string& second){
        return first.size() > second.size();
    });
        string a="";
        a+=words[0];
        a+="#";
        for(int i=1;i<words.size();i++){
            int j;
            for(j=0;j<a.length()-1;j++){
                // cout<<a[j+words[i].length()]<<"| ";
                if(words[i]==a.substr(j,words[i].length())&&a[j+words[i].length()]=='#'){
                    // cout<<a.substr(j,words[i].length())<<" ";
                    break;
                }
            }
            if(j<a.length()-1){
                continue;
            }
            // if(a.substr(0,words[i].length()))
            a+=words[i];
            a+="#";
        }
        cout<<a<<" ";
        return a.length();

    }
};
