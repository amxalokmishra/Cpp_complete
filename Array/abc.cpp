#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,maxsum=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
            sum+=arr[j];
        maxsum=max(maxsum,sum);
    }
    cout<<maxsum;
    return 0;
}