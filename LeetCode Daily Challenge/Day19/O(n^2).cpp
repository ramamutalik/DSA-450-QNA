class Solution {
    
    
public:
    bool isPalindrome(string S)
{
    // Stores the reverse of the
    // string S
    string P = S;
 
    // Reverse the string P
    reverse(P.begin(), P.end());
 
    // If S is equal to P
    if (S == P) {
        // Return "Yes"
        return 1;
    }
    // Otherwise
    else {
        // return "No"
        return 0;
    }
}
 string longestPalindrome(string s) {
        int ans=0;
     string anss="";
        for(int i=0;i<s.length();i++){
            for(int j=0;j<s.length()-i;j++){
                string a=s.substr(i,j+1);
                if(isPalindrome(a)&&ans<=(j+1)){
                    // cout<<a<<" ";
                    ans=max(ans,j+1);
                    anss=a;
                }
                // cout<<a<<" ";
            }
        }
        return anss;
    }
};
