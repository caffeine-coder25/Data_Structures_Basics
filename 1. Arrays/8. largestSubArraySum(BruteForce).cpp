/*
Print largest subarray sum using brute force approach, don't worry it would go in O(n ^ 3) time complexity
*/

#include<bits/stdc++.h>
using namespace std;

int printMaxSubArraySumBruteForce(int *arr, int n){
	int mSum = INT_MIN;
	for(int i =0; i < n; i++){
		for(int j = i; j < n; j++){
			int cSum = 0;
			for(int k = i; k <= j; k++){
				cSum = cSum + arr[k];
			}
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
	
	int arr[] = {1};
	int size = sizeof(arr) / sizeof(int);

	cout << printMaxSubArraySumBruteForce(arr, size);

	return 0;
}