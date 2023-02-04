#include <bits/stdc++.h> 
vector<int> reverseArray(vector<int> &arr , int m)
{
	int s= 0;
	int e= arr.size()-1;
	while(s<=e)
	{
		swap(arr[s],arr[e]);
		++s;
		--e;
	}
    return arr;
}
