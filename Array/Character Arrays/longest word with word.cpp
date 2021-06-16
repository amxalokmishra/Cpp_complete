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
    int maxlen=0,len=0,end=0,start=0;
    while(1)
    {
       if(arr[i]!=' ')
       len++;

       i++;

       if(arr[i]==' ' || arr[i]=='\0')
       {
           if(len>maxlen)
           {
               maxlen=len;
               end=i;
           }
           len=0;
       }
       if(arr[i]=='\0')
       break;
    }
    start=end-maxlen;
    cout<<maxlen<<"\n";
    for(int i=start;i<end;i++)
    cout<<arr[i];
    return 0;
}