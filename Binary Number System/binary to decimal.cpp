#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,k=0;double s=0;
    cin>>n;
    for(int i=n;i>0;i/=10)
    {
       r=i%10;
       s=s+r*pow(2,k);
       k++;
    }
    cout<<s;
    return 0;
}