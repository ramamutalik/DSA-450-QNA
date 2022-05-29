#include<iostream>
#include<algorithm>
class Solution {
public:
    int maxProduct(vector<string>& words) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            int s=words[i].size();
            // cout<<s<<endl;
            char a[s];
            for(int k=0;k<s;k++){
                a[k]=words[i][k];
            }
            for(int j=i+1;j<words.size();j++){
                int x;
                for( x=0;x<s;x++){
                if(words[j].find(a[x])!=string::npos){
                    break;
                }
                }
                if(x==s){
                // cout<<words[i]<<" "<<words[j]<<endl;
                if(ans<words[j].size()*words[i].size()){
                    ans=words[j].size()*words[i].size();
                }
                }
                // ans=max(ans,words[j].size()*words[i].size());
            }
        }
        return ans;
    }
};
