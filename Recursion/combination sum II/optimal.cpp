class Solution {
public:
    void helper(int indx,vector<int>& candidates,int target,vector<vector<int>>& ans,vector<int>& v){
            if(target==0)
            {
                ans.push_back(v);
                 return;
            }
          
        for(int i=indx;i<candidates.size();i++){
        if(i>indx&&candidates[i]==candidates[i-1]){ continue;}
        if(candidates[i]>target){ break;}
        v.push_back(candidates[i]);
        helper(i+1,candidates,target-candidates[i],ans,v);
        v.pop_back();
        
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        vector<int> v;
        helper(0,candidates,target,ans,v);
        return ans;
    }
};
