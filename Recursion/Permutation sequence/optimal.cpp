class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> v;
        int fact=1;
        for(int i=1;i<n;i++){
            fact=fact*i;
            v.push_back(i);
        }
        v.push_back(n);
        string ans="";
        k=k-1;
        while(true){
            int x=k;
            x=x/fact;
            ans=ans+to_string(v[x]);
            v.erase(v.begin()+k/fact);
            k=k%fact;
            if(v.size()==0){
                
                break;
            }
            fact=fact/v.size();
        }
        return ans;
    }
};
