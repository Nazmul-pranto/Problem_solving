#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>

using namespace std;
int main()
{

int n,b,rev=0,p;
    int a[10];
scanf("%d",&n);
while(n--)
{
    scanf("%d",&p);

    for(int i=0;i<10;i++)
       a[i]=0;

    for(int i=1;i<=p;i++)
    {
        b=i,rev=0;
        while(b!=0)
        {
            rev=b%10;
            b/=10;
            a[rev]++;
        }
    }

    for(int i=0;i<10;i++)
     {
         if(i==9)
               printf("%d",a[i]);
         else
               printf("%d ",a[i]);
     }

    printf("\n");
}


return 0;
}
