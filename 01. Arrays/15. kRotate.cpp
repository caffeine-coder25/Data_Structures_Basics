/*
Rotate the given array by k units in clockwise direction, try to solve in a better approach than this one.
*/

#include<bits/stdc++.h>
using namespace std;

//TLE for larger input, try to make it faster

vector<int> kRotate(vector<int> a, int k){
    // your code  goes here
    int length = a.size();
    while(k--){
        int last = a[length - 1];
        for(int i = length - 1; i > 0; i--){
        a[i] = a[i - 1];
        }
        a[0] = last;
    }
    return a;
}

int main() {
    
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;
    vector<int> ans = kRotate(arr, k);
    for(int x: ans)
        cout << x << " ";
    return 0;
}

