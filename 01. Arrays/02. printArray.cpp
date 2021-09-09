/*
Create a function to print array
*/

#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n){
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}

int main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 
	
	int arr[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(arr)/sizeof(int);

	printArray(arr, n);
	
	return 0;
}