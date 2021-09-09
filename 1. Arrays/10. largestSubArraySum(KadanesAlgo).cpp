/*
Print maximum subarray sum using Kadane's algorithm, solve it in O(n) time complexity, also apply for special case i.e. if all the elements are negative in an array.
*/

#include<bits/stdc++.h>
using namespace std;

int printMaxSubArraySumKadanesAlgo(int *arr, int n){
	int curSum = 0, maxSum = 0;
	int maxEle = INT_MIN;
	for(int i = 0; i < n; i++){
		curSum = curSum + arr[i];
		if(curSum < 0)
			curSum = 0;
		if(curSum > maxSum)
			maxSum = curSum;
		if(arr[i] > maxEle)
			maxEle = arr[i];
	}
	return (maxEle < 0 ? maxEle : maxSum);
}

int main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 
	
	int arr[] = {5,4,-1,7,8};
	
	int size = sizeof(arr) / sizeof(int);

	cout << printMaxSubArraySumKadanesAlgo(arr, size);
	
	return 0;
}