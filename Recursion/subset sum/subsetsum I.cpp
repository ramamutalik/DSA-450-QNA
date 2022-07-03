// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void helper(int indx,vector<int>&arr,int sum,int size,vector<int>&v,vector<int>&ans){
        if(indx==size){
            ans.push_back(sum);
            // sum=0;
            return ;
        }
        v.push_back(arr[indx]);
        helper(indx+1,arr,sum+arr[indx],size,v,ans);
        v.pop_back();
        helper(indx+1,arr,sum,size,v,ans);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> v,ans;
        helper(0,arr,0,N,v,ans);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
