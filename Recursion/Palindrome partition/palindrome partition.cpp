class Solution {
public:
    bool isplaindrome(string a){
        int n=a.length()/2,i=0,j=a.length()-1;
        while(n){
            if(a[i]!=a[j])
                return false;
            n--;
            i++;
            j--;
        }
        return true;
    }
     void helper(int indx,string s,vector<string>& t,vector<vector<string>>&a){
         if(indx==s.length()){
             a.push_back(t);
         }
        for(int i=indx;i<s.length();i++){
            string temp=s.substr(indx,i-indx+1);
            if(isplaindrome(temp)){
                t.push_back(temp);
                helper(i+1,s,t,a);
            t.pop_back();
            }
            
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> v;
        helper(0,s,v,ans);
        return ans;
    }
};
