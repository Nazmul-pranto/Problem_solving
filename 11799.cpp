#include  <stdio.h>
#include <iostream>

using namespace std;

int main(){

int n,a[100],p,top;

cin>>n;
for(int i=1;i<=n;i++)
{
    cin>>p;
    top=0;
    for(int j=0;j<p;j++)
    {
        cin>>a[j];
        if(top<a[j])
        {
            top=a[j];
        }
    }

    printf("Case %d: %d\n",i,top);
}

 return 0;
}
