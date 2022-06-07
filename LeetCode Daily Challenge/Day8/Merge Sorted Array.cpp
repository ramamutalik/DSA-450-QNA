class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,j,limit=nums1.size()-nums2.size();
        cout<<limit<<" ";
        for(i=0,j=0;i<limit&&j<nums2.size();){
            cout<<i<<" ";
            if(nums1[i]>=nums2[j]){
                swap(nums1[i],nums2[j]);
                sort(nums2.begin(),nums2.end());
                // cout<<nums1[i]<<" ";
                i++;
            }else{
            
                i++;
            }
            // sort(nums2.begin(),nums2.end());
            // cout<<nums1[i]<<" ";
        }
        for(int i=0;i<nums2.size();i++){
            nums1[nums1.size()-nums2.size()+i]=nums2[i];
        }
    }
};
