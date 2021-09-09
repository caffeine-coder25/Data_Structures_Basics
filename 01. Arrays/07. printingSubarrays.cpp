/*
Print all subarrays of an array
*/

#include<bits/stdc++.h>
using namespace std;

void printSubArrays(int *arr, int n){
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			for(int k = i; k <= j; k++){
				cout << arr[k] << " ";
			}
			cout << endl;
		}
	}
}

int main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 
	
	int arr[] = {1, 2, 3};
	int n = sizeof(arr)/sizeof(int);

	printSubArrays(arr, n);

	return 0;
}