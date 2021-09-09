/*
Write bubble sort such that it's time complexity is O(n) in the best case.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> v){
    // your code  goes here
    
    int check = 0;
    
    for(int i = 0; i < v.size(); i++){
        if(v[i] > v[i + 1]){
            check++;
        }
    }
    
    if(check == 0)
        return v;
    else{
        for(int times  = 1; times <= v.size() - 1; times++){
		    for(int j = 0; j <= v.size() - times - 1; j++){
			if(v[j] > v[j + 1]){
				swap(v[j], v[j + 1]);
			}
		}
	    }
    }
	return v;
}