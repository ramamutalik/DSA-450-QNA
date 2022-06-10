class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> as;
        int ans=0;
        int temp=0;
        int l=0,r=0;
        if(s.length()==0){
            return ans;
        }
        while(r<s.length()){
            if(as.find(s[r])!=as.end()){
                temp=max(ans,temp);
                while(as.find(s[r])!=as.end()){
                as.erase(s[l]);
                l++;
                }
                as.insert(s[r]);
                temp=max(temp,r-l+1);
                r++;
            }
            else{
                temp=max(temp,r-l+1);
                as.insert(s[r]);
                r++;
            }
        }
        return temp;
    }
};
