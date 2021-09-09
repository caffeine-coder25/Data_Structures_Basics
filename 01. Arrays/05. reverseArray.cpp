/*
Write a program to reverse an array
*/

#include<bits/stdc++.h>
using namespace std;

void reverseArray(int *arr, int n){
	int start = 0, end = n - 1;
	while(start <= end){
		//inbuilt swap
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
}

int main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 
	
	int arr[] = {10, 20, 30, 40, 50, 60};
	int n = sizeof(arr)/sizeof(int);
	
	reverseArray(arr, n);

	for(int i = 0; i < n; i++){
		cout << arr[i] << " "; 
	}

	return 0;
}