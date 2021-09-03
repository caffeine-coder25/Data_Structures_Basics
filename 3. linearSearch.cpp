/*
Write a program to perform Linear Search
*/

#include<bits/stdc++.h>
using namespace std;

int linearSearch(int *arr, int n, int key){
	for(int i = 0; i < n; i++){
		if(arr[i] == key){
			return i;
		}
	}
	return -1;
}

int main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 
	
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(arr)/sizeof(int);
	int key = 71;

	cout << linearSearch(arr, n, key);
	
	return 0;
}