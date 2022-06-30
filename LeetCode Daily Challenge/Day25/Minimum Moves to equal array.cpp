class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int t;
        
        if(n%2==0){
            if(nums[n/2-1]<nums[n/2]){
                t=nums[n/2-1];
            }
            else 
                t=nums[n/2];
        }else{
            t=nums[n/2];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]<=t){
            
                ans+=(t-nums[i]);
            }
            else{
             
                ans+=(nums[i]-t);
            }
        }
        return ans;
    }
};
