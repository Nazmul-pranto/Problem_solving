#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{

int a[3001],n,p[3000];
while(scanf("%d",&n)==1)
{
    int flag=1,c=0;
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
        p[i]=0;
    }

    for(int i=0;i<n-1;i++)
    {
        p[i]=abs(a[i+1]-a[i]);


    }
    c=n-1;

sort(p,p+c);


for(int i=1;i<n;i++)
{
   if(i!=p[i-1])
   {
        flag=0;

        break;
   }

}

 if(flag!=0)
    {
        printf("Jolly\n");

    }
    else
         printf("Not jolly\n");
}

return 0;
}
