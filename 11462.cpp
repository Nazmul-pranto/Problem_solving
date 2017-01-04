#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int a[2000005];
int main()
{
 int n,i,j;

    while (scanf("%d",&n) && n)
    {
        for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


      sort(a,a+n);
    for(j=0;j<n;j++)
    {
       printf("%ld",a[j]);
       if(j<n-1)
        cout<<" ";
    }
    cout<<endl;

}
    return 0;



}
