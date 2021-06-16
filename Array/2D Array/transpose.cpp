#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c],arr1[c][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cin>>arr[i][j];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr1[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cout<<arr1[i][j]<<" ";
        cout<<endl;
    }
return 0;
}