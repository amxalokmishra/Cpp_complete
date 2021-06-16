#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int maxlen=0,len=0;
    while(1)
    {
       if(arr[i]!=' ')
       len++;

       i++;

       if(arr[i]==' ' || arr[i]=='\0')
       {
           if(len>maxlen)
           maxlen=len;
           len=0;
       }
       if(arr[i]=='\0')
       break;
    }
    cout<<maxlen;
    return 0;
}