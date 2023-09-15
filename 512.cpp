// C++ program to maximize the sum of K elements
// in the array by taking only corner elements

#include <bits/stdc++.h>
using namespace std;

// Function to return maximum sum
int maxsum(int arr1[], int arr2[], int start1, int end1, int start2, int end2, int n1, int n2,int n,int max_sum)
{
	// Base case

	// we required some chnage on this pogram so verify it.
	// ok i do necessary change .
	//thank you for your guidence
	// ok i do necessary change .
	//thank you for your guidence
	// ok i do necessary change .
	//thank you for your guidence

	//thank you for your guidence
	// ok i do necessary change .
	//thank you for your guidence

	//thank you for your guidence
	// ok i do necessary change .
	//thank you for your guidence


	//thank you for your guidence
	// ok i do necessary change .
	//thank you for your guidence
	if (n == 0)
		return max_sum;
   /// cout << n << " ";
	// Pick the start index
	int mstart1 = max_sum + arr1[start1];
   // cout << mstart1 << " ";
	// Pick the end index
	int mend1 = max_sum + arr1[end1];
   // cout << mend1 << " ";
    // Pick the start index
	int mstart2 = max_sum + arr2[start2];
 //   cout << mstart2 << " ";
	// Pick the end index
	int mend2 = max_sum + arr2[end2];
  //  cout << mend2 << " ";

	// Recursive function call
	
	int s1 = (start1 + 1) < n1 ? maxsum(arr1,arr2,start1+1,end1,start2,end2,n1,n2,n-1,mstart1) : 0;
    int s2 = (end1 - 1) >= 0  ? maxsum(arr1,arr2,start1,end1-1,start2, end2,n1,n2,n-1,mend1) : 0;
    int s3 = (start2 + 1) < n2  ? maxsum(arr1,arr2,start1,end1,start2+1, end2,n1,n2,n-1,mstart2) : 0;
    int s4 = (end2 - 1) >= 0  ? maxsum(arr1,arr2,start1,end1,start2, end2-1,n1,n2,n-1,mend2) : 0;

	// Return the final answer
    int ans = max(s1, max(s2, max(s3,s4)));
	return ans;
}

// Function to find the maximized sum


// Driver code
int main()
{
   
	int arr1[] = {2,1,1,3,4};
    int arr2[] = {3,6,1,8,8,9,2,1,1};
    int n = 5;
    cout << maxsum(arr1, arr2,0,5,0,9,5,9,n,0);
}

// This code is contributed by Aditya Kumar (adityakumar129)
