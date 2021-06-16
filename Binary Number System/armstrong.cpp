#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;double s=0;
    cin>>n;
    for(int i=n;i>0;i/=10)
    {
        r=i%10;
        s=s+pow(r,3);
    }
    if(s==n)
    cout<<"It is an armstrong number. ";
    else
    cout<<"It is not an armstrong number. ";
    return 0;
}