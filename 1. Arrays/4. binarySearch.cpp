/* 
Write a program to perform binary search
*/

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int n, int key){
	int start = 0, end = n - 1;
	while(start <= end){
		int mid = (start + end) / 2;
		if(key == arr[mid]){
			return mid;
		}
		else if(key > arr[mid]){
			start = mid + 1;
		}
		else{
			end = mid - 1;
		}
	}
	return -1;
}

int main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 
	
	int arr[] = {10, 26, 37, 28, 29, 64};
	int n = sizeof(arr)/sizeof(n);
	int key;
	cin >> key;

	cout << binarySearch(arr, n, key);
		
	return 0;
}
