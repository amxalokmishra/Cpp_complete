#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cin>>arr[i][j];
    }
    int column_start=0,row_start=0,column_end=c-1,row_end=r-1;
    while(row_start<=row_end && column_start<=column_end)
    {
        for(int i=column_start;i<=column_end;i++)
        cout<<arr[row_start][i]<<" ";
        row_start++;

        for(int i=row_start;i<=row_end;i++)
        cout<<arr[i][column_end]<<" ";
        column_end--;
        
        for(int i=column_end;i>=column_start;i--)
        cout<<arr[row_end][i]<<" ";
        row_end--;

        for(int i=row_end;i>=row_start;i--)
        cout<<arr[i][column_start]<<" ";
        column_start++;
    }
    return 0;
}