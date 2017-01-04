#include  <stdio.h>
#include <iostream>
#include<algorithm>
using namespace std;

int main(){
int n,a[51],p,h=0,l=0;

cin>>n;

for(int i=1;i<=n;i++)
{
    cin>>p;

    for(int j=0;j<p;j++)
    {
        cin>>a[j];
    }

    h=0,l=0;

    int flag=a[0];

    for(int j=1;j<p && p!=1;)
    {
        if(a[j] > a[j-1])
        {
            h++;
            j++;
        }
        else if(a[j] < a[j-1])
        {
            l++;
            j++;
        }
        else{

            j++;
        }
    }

    printf("Case %d: %d %d\n",i,h,l);
}

 return 0;
}
