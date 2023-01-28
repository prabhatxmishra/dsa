#include <bits/stdc++.h> 
int ispossible(vector<int> arr,int mid, int n, int m)
{
    int count=1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]+sum<=mid)
        {
            sum=sum+arr[i];
        }
        else
        {
            count++;
            if(count>m||arr[i]>mid)
            {
                return 0;
            }
            sum=arr[i];
        }
    }
    return 1;
}
int allocateBooks(vector<int> arr, int n, int m) {
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans;
    while(s<=e)
    {
        if(ispossible(arr,mid,n,m))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
          s=mid+1;  
        }
        
        mid=s+(e-s)/2;
    }
    return ans;
}