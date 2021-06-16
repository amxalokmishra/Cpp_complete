#include<iostream>
using namespace std;
int main()
{
    int n,r,s=0;
    cin>>n;
    for(int i=n;i>0;i/=2)
    {
        r=i%2;
        s=s*10+r;
    }
    cout<<s<<endl;
    return 0;
}