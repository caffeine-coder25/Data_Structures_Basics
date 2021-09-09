/*
Print maximum subarray sum using prefix sum approach, make a prefixSum array and solve it in O(n ^ 2) time complexity
*/

#include<bits/stdc++.h>
using namespace std;

int printMaxSubArraySumPrefixSum(int *arr, int n){
	int prefixSum[100] = {0};
	prefixSum[0] = arr[0];
	for(int i = 1; i < n; i++){
		prefixSum[i] = prefixSum[i - 1] + arr[i];
	}

	int mSum = INT_MIN;

	for(int i = 0; i < n; i++){
		int cSum = 0;
		for(int j = i; j < n; j++){
			cSum = i > 0 ? prefixSum[j] - prefixSum[i - 1] : prefixSum[j];
			if(cSum > mSum)
				mSum = cSum;
		}
	}
	return mSum;
}

int main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 
	
	int arr[] = {5,4,-1,7,8};
	int size = sizeof(arr) / sizeof(int);

	cout << printMaxSubArraySumPrefixSum(arr, size);
	
	return 0;
}