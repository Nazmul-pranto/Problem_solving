#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 1000001
int a[MAX];
int d[MAX];
using namespace std;
void sieve()
{
int root;
for(int i=0;i<=MAX;i++)
    a[i]=1;

root=sqrt(MAX);
   a[0]=0;
   a[1]=0;
    for(int i=2;i<=root;i++)
    {
        if(a[i]==1)
        {
           for(int j=2;i*j<=MAX;j++)
            a[i*j]=0;

        }

    }

}

void digit()
{
    int rev=0,sum=0;
    int t=0;
    for(int i=1;i<=MAX;i++)
    {
        rev=0,sum=0,t=i;
        while(t !=0)
        {
            rev=t%10;
            t/=10;
            sum+=rev;
        }

        d[i]=sum;
    }


}

int main()
{
 sieve();
 digit();
int n,ans,x,y;

 scanf("%d",&n);

 while(n)

 {
     ans=0;
   scanf("%d %d",&x,&y);

   for(int i=x;i<=y;i++)
   {
       if(a[d[i]]==1 && a[i]==1)
        ans++;
   }
   printf("%d\n",ans);

n--;
  }

    return 0;
}
