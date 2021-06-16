#include<iostream>
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
    int r1=0,c1=c-1;
    while (r1<r && c1>=0)
    {
        if(arr[r1][c1]==k)
        cout<<r1+1<<" "<<c1+1<<endl;
        if(arr[r1][c1]>k)
        c1--;
        else
        r1++;
    }
    return 0;
}