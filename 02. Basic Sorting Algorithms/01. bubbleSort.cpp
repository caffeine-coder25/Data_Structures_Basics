/*
Implement Bubble Sort
Time Complexity: O(n ^ 2)
*/

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n){
	for(int times  = 1; times <= n - 1; times++){
		for(int j = 0; j <= n - times - 1; j++){
			if(arr[j] > arr[j + 1]){
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 
	
	int arr[] = {6, 5, 4, 3, 2, 1};
	int n = sizeof(arr)/sizeof(int);

	bubbleSort(arr, n);

	for(int x: arr)
		cout << x << " ";
	
	return 0; 
}

