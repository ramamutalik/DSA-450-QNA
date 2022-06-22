class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<int> v;
        for(auto i:nums){
            v.push_back(i);
        }
        sort(v.begin(),v.end(),greater<int>());
        return v[k-1];
    }
};
