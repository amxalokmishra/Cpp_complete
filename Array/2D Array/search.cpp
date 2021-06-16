#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,k;
    cin>>r>>c>>k;
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cin>>arr[i][j];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==k)
            {
                cout<<i<<" "<<j;
                return 0;
            }
        }
    }
    return 0;
}