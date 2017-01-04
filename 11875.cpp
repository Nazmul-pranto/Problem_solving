#include  <stdio.h>
#include <iostream>

using namespace std;

int main(){

int n,p,a[10];
cin>>n;

for(int i=1;i<=n;i++)
{
    cin>>p;

    for(int i=0;i<p;i++)
    {
        cin>>a[i];
    }
    int div=p/2;
    if(p%2==0)
    {
        printf("Case %d: %d\n",i,a[div-1]);
    }
    else{
                printf("Case %d: %d\n",i,a[div]);
    }
    div=0;
    p=0;
}

 return 0;
}
