//Find Largest element in an array.

#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {   
     int largest = INT_MIN;
     for(int i = 0; i < arr.size(); i++){
     	if(arr[i] > largest)
     		largest = arr[i];
     }
     return largest;
}