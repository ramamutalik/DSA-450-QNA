class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        if(nums.size()==0){
            return ans;
        }
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i > 0 && nums[i]== nums[i-1])
            {
                continue;
            }
            for(int j=i+1;j<nums.size();j++){
                int left=j+1,right=nums.size()-1;
                while(left<right){
                    long long tt=1LL*nums[i]+nums[j]+nums[left]+nums[right];
                    if(tt==target){
                        vector<int> t;
                        t.push_back(nums[i]);
                        t.push_back(nums[j]);
                        t.push_back(nums[left]);
                        t.push_back(nums[right]);
                        sort(t.begin(),t.end());
                        if(!(find(ans.begin(),ans.end(),t)!=ans.end()))
                        ans.push_back(t);
                        while(left+1 < right && nums[left]== nums[left+1])
                    {
                        left++;
                    }
                    while(right-1 > j && nums[right]== nums[right-1])
                    {
                        right--;
                    }
                    left++;
                    right--;
                    }else if(tt<target)
                {
                    left++;
                }
                else
                {
                    right--;
                }
                }
            }
        }
        return ans;
    }
};


