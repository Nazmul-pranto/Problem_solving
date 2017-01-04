#include<bits/stdc++.h>
using namespace std;

int main()
{


    int n,a[10],top;

    char c[10][101];

    scanf("%d",&n);
    for(int j=1;j<=n;j++){

    for(int i=0;i<10;i++)
    {
        scanf("%s",c[i]);
        scanf(" %d",&a[i]);
    }
    top=a[0];
    for(int i=0;i<10;++i)
    {
        if(top<a[i])
        {
            top=a[i];
        }
    }
    printf("Case #%d:\n",j);
    for(int i=0;i<10;i++)
    {
        if(a[i]==top)
        {
            printf("%s\n",c[i]);
        }
    }

    top=0;

    }
}
