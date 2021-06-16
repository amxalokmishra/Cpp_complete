#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,r;
    cin>>n;
    for(int i=n;i>0;i/=10)
    {
         r=i%10;
         s=s*10+r;
    }
    cout<<s;
    return 0;
}