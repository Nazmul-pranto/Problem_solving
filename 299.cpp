#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],tmp=0,n,l,sum=0;

    cin>>n;

    for(int t=0;t<n;t++){
            cin>>l;
        for(int i=0;i<l;i++)
    {
        cin>>a[i];
    }

    sum=0;
         for(int i=0;i<l;i++)
    {
        for(int j=i+1;j<l;j++)
    {
        if(a[i]>a[j])
        {
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
            sum++;
        }
    }
    }
   cout<<"Optimal train swapping takes "<<sum<<" swaps."<<endl;
    }
     return 0;
}

