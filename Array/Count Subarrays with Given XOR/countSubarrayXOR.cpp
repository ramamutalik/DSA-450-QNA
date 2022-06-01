#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int cnt=0;
    int xorr=0;
    map<int,int> m;
    for(int i=0;i<arr.size();i++){
        xorr^=arr[i];
        if(xorr==x){
            cnt++;
        }
        if(m.find(xorr^x)!=m.end()){
            cnt+=m[xorr^x];
        }
            m[xorr]++;
       
        
    }
    return cnt;
}
