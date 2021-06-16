#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,j=-1;
    cin>>n>>r;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n-r;i++)
    arr1[i+r]=arr[i];
    for(int i=n-r;i<n;i++)
    {
        j++;
        arr1[j]=arr[i];
    }
    for(int i=0;i<n;i++)
    cout<<arr1[i]<<" ";
    return 0;
}