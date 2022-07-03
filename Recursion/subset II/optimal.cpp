class Solution {
public:
    void helper(int indx,vector<int>& num, int n,vector<vector<int>>& ans,vector<int>&ds){
        ans.push_back(ds);
        if(indx==n){
            
            return;
        }
        
        for(int i=indx;i<n;i++){
        if(i>indx&&num[i]==num[i-1]){
            continue;
        }
        ds.push_back(num[i]);
        helper(i+1,num,n,ans,ds);
        ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        helper(0,nums,nums.size(),ans,ds);
        return ans;
    }
};
