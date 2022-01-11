/***********************************

Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

Example 1:

Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given 
array is 7.
Example 2:

Input:
N = 5
arr[] = 7 10 4 20 15
K = 4
Output : 15
Explanation :
4th smallest element in the given 
array is 15.
Your Task:
You don't have to read input or print anything. Your task is to complete the function kthSmallest() which takes the array arr[], integers l and r denoting the starting and ending index of the array and an integer K as input and returns the Kth smallest element.
 
 
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
Constraints:
1 <= N <= 105
1 <= arr[i] <= 105
1 <= K <= N

****************************************/

//inbuilt sort function

int kthSmallest(int arr[], int l, int r, int k) {
        //code here
         sort(arr,arr+r+1);
         return arr[k-1];
}

//klog(N) max heap

int kthSmallest(int arr[], int l, int r, int k) {
        //code here
     priority_queue<int> pq;
        for (int i=r; i>=0; i--)
        {
            pq.push(arr[i]);
            if (pq.size() > k)pq.pop();
        }
        return pq.top();
}

// min heap

priority_queue<int,vector<int>,greater<int>> p;
    for(int i=l;i<=r;i++){
        p.push(arr[i]);
    }
    for(int j=0;j<k-1;j++){
        p.pop();
    }
    return p.top();
    }
