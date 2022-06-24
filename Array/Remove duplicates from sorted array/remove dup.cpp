class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int t;
        int ind=0;
        int ans=1;
        for(int i=0;i<nums.size();){
            t=nums[i];
            int c=0,j=i+1;
            while(j<nums.size()){
                if(t==nums[j]){
                    c++;
                }else{
                    break;
                } 
                j++;
            }
            i=j;
            nums[ind]=t;
            ind++;
        }
        return ind;
    }
};
