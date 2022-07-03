class Solution {
public:
    void helper(int indx,vector<int>& candidates,int target,set<vector<int>>& ans,set<int>& s){
        if(indx==candidates.size()){
            if(target==0)
            {
            vector<int> t;
            for(auto i:s){
                t.push_back(candidates[i]);
            }
            sort(t.begin(),t.end());
            ans.insert(t);
            }
            return;
        }
        s.insert(indx);
        helper(indx+1,candidates,target-candidates[indx],ans,s);
        s.erase(indx);
        helper(indx+1,candidates,target,ans,s);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        set<vector<int>> ans;

        set<int> s;
        helper(0,candidates,target,ans,s);
        for(auto i:ans){
            
            res.push_back(i);
        }
        return res;
    }
};
