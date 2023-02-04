#include <bits/stdc++.h> 
vector<int> reverse(vector<int> v)
{
	int s=0;
	int e=v.size()-1;
	while(s<e)
	{
		swap(v[s++],v[e--]);
	}
	return v;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i=n-1;
	int j=m-1;
	int sum,carry=0;
	vector<int> ans;
	while(i>=0 && j>=0)
	{
		int val1=a[i];
		int val2=b[j];
		sum= val1+val2+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
		j--;
	}

	while(i>=0) // case 1
	{
		sum= a[i]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
	}
	while(j>=0) // case 2
	{
		sum= b[j]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		j--;
	}
	while(carry!=0) // case 3
	{
		sum=carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
	}
	return reverse(ans);
}