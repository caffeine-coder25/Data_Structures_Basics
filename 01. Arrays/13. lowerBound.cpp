/* 
Find lower bound of the given integer Val in the array A, lower bound of element is that number which is just smaller than or equal to that number.
*/

#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> A, int Val) {
    // your code goes here
    int ans = -1;
    for(int i = 0; i < A.size(); i++){
    	if(A[i] <= Val)
    		ans = A[i];
    }
    return ans;
}

int main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 
	
	vector<int> arr = {1, 2, 3, 4, 6};
	int Val = 4;

	cout << lowerBound(arr, Val);
	
	return 0;
}
