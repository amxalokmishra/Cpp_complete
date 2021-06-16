 #include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n, int k)
{
    int s=0,e=n,mid=s+e/2;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]==k)
        return mid;
        else if(arr[mid]<k)
        s=mid+1;
        else
        e=mid-1;
    }
    return -1;
}
int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i]; 
    cout<<"Enter the element to be searched: "; 
    cin>>k; 
    cout<<endl; 
    cout<<binarysearch(arr,n,k);
    return 0;
}