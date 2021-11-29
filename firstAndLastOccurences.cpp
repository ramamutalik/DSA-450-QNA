/**************************
Given a sorted array arr containing n elements with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.

Example 1:

Input:
n=9, x=5
arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
Output:  2 5
Explanation: First occurrence of 5 is at index 2 and last
             occurrence of 5 is at index 5. 
 

Example 2:

Input:
n=9, x=7
arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 }
Output:  6 6 

Your Task:
Since, this is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function find() that takes array arr, integer n and integer x as parameters and returns the required answer.
Note: If the number x is not found in the array just return both index as -1.

 

Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1).

 

Constraints:
1 ≤ N ≤ 107
*********************************************/
//approch 1
vector<int> find(int arr[], int n , int x )
{
    
    int l=0;
    int h = n-1;
    vector<int> ans;
    int mid;
    int firstOccurence=-1;
    while(l<=h)
    {
        mid = l + (h-l)/2;
        if(arr[mid] == x)
        {
            firstOccurence = mid;
            h = mid-1;
        }
        else if(arr[mid] > x)
        {
            h = mid - 1;
        }
        else if(arr[mid]< x)
        {
            l = mid + 1;
        }
    }
    
    l = 0;
    h = n-1;
    int lastOccurence=-1;

    while(l <= h)
    {
        mid = l + (h-l)/2;
        if(arr[mid] == x)
        {
            lastOccurence = mid;
            l = mid+1;
        }
        else if(arr[mid]> x)
        {
            h=mid-1;
        }
        else if(arr[mid]<x)
        {
            l=mid+1;
        }
    }
    
    ans.push_back(firstOccurence);
    ans.push_back(lastOccurence);
    return ans;
}
//approach 2
vector<int> find(int arr[], int n , int x )
{
int i=0,j=n-1;
    int fi=-1;
    int li=-1;
    while(i<=j){
        if(arr[i]==x&&fi==-1){
            fi=i;
            i++;
        }
        else{
            i++;
        }
    }
    i=0,j=n-1;
    while(i<=j){
       if(arr[j]==x&&li==-1){
            li=j;
            j--;
        }
        else{
            j--;
        } 
    }
}
    return {fi,li};
