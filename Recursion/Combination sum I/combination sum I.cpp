class Solution {
public:
    int x=0;
    void helper(int ind,vector<int>& candidates,int sum,vector<int>& ds,vector<vector<int>>& dsa){
        if(ind==candidates.size()){
            if(sum==0){
                dsa.push_back(ds);
            }
            return ;
        }
        if(sum>=candidates[ind]){
            ds.push_back(candidates[ind]);
            helper(ind,candidates,sum-candidates[ind],ds,dsa);
            ds.pop_back();
           
        }
         helper(ind+1,candidates,sum,ds,dsa);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> dsa;
        vector<int> ds;
        helper(0,candidates,target,ds,dsa);
        return dsa;
    }
};
