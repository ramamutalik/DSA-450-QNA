class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int j;
        for(int i=0;i<strs[0].length();i++){
            char a=strs[0][i];
            for(j=1;j<strs.size();j++){
                if(a!=strs[j][i]){
                    return ans;
                }
            }
            if(j==strs.size()){
                ans+=a;
            }
        }
        return ans;
        
    }
};
