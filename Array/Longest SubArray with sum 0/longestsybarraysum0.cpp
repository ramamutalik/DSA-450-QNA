// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        // Your code here
        int maxi=0;
        int s=0;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            s=s+arr[i];
            if(s==0){
                if(mp[s]){
                    maxi=max(maxi,i-mp[s]);
                    
                }else{
                    maxi=max(maxi,i+1);
                }
            }
            else{
                if(!(mp.find(s)!=mp.end()))
                mp[s]=i;
                else{
                        maxi=max(maxi,i-mp[s]);
                }
            }
        }
        return maxi;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends
