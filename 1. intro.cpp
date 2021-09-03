/*
Basic C++ Program to take input of integer array and print it
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 
	
	int marks[100], n;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> marks[i];
	}

	for(int i = 0; i < n; i++){
		cout << marks[i] << " ";
	}
	
	return 0;
}