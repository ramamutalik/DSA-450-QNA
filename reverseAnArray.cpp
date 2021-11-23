/**********************************

Given an array A of size N, print the reverse of it.

Input:
First line contains an integer denoting the test cases 'T'. T testcases follow. Each testcase contains two lines of input. First line contains N the size of the array A. The second line contains the elements of the array.

Output:
For each testcase, in a new line, print the array in reverse order.

Constraints:
1 <= T <= 100
1 <= N <=100
0 <= Ai <= 100

Example:
Input:
1
4
1 2 3 4
Output:
4 3 2 1
***************************************/

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int N;
	    cin>>N;
	    int arr[N];
	    for(int j=0;j<N;j++){
	        cin>>arr[j];
	    }
	    int mid=N/2;
	    for(int j=0;j<mid;j++){
	        int temp=arr[j];
	        arr[j]=arr[N-1-j];
	        arr[N-1-j]=temp;
	    }
	    for(int j=0;j<N;j++){
	        cout<<arr[j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
