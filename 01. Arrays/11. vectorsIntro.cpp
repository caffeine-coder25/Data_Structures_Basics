/*
Intro to vectors
*/

#include<bits/stdc++.h>
using namespace std;



int main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 
	
	//creating a vector
	vector<int> arr = {1, 2, 3, 4, 5};

	cout << arr.size() << endl;

	//pushing back an element
	arr.push_back(6); 

	cout << arr.size() << endl << arr.capacity() << endl;

	for(int x: arr)
		cout << x << " ";

	cout << endl;

	//removing an element
	arr.pop_back();
	arr.pop_back();

	cout << arr.size() << endl;

	vector<int> Visited(100, 0);

	for(int x: Visited)
		cout << x << " ";
	
	return 0;
}