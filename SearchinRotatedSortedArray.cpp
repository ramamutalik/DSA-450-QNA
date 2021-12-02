
/************************************

*************************************/
int fun(vector<int>& nums,int l,int h,int target)
    {
        if(l > h)
            return -1;
        
        int mid = (h+l)/2;
        if(nums[mid] == target)
            return mid;
        
        if(nums[l]<=nums[mid])
        {
            if(target>=nums[l] && target<=nums[mid])
                return fun(nums,l,mid-1,target);
            return fun(nums,mid+1,h,target);
        }
        
        if(target>=nums[mid] && target<=nums[h])
            return fun(nums,mid+1,h,target);
        return fun(nums,l,mid-1,target);
    }
    
    int search(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size()-1;
        return fun(nums,l,h,target);
    }
};
