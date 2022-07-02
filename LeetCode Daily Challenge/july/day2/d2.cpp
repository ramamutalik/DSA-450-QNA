class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        
        int n1 = horizontalCuts.size(), n2 = verticalCuts.size();
        int max_hdiff = max(horizontalCuts[0] - 0, h - horizontalCuts[n1-1]);
        int max_vdiff = max(verticalCuts[0] - 0, w - verticalCuts[n2-1]);
        
        for(int i=0;i<n1-1;i++){
            max_hdiff = max(max_hdiff, horizontalCuts[i+1] - horizontalCuts[i]);
        }
        for(int i=0;i<n2-1;i++){
            max_vdiff = max(max_vdiff, verticalCuts[i+1] - verticalCuts[i]);
        }
        return (1LL*max_hdiff*max_vdiff)%1000000007;
    }
};
