/* 
Write a program to print all tha pairs of elements in an array
*/

#include<bits/stdc++.h>
using namespace std;

void printAllPairs(int * arr, int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			cout << arr[i] << " " << arr[j] << endl;
		}
		cout << endl;
	}
}

int main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 
	
	int arr[] = {1, 2, 3, 4};
	int n = sizeof(arr)/sizeof(int);
	printAllPairs(arr, n);

	return 0;
}