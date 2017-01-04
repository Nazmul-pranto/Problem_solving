#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
 int n,a[100000],count=0;

 while(scanf("%d",&n) && n)
 {
     int t=0;
     count=0;
     while(n>0)
     {
         a[t]=n%2;
         if(a[t]==1)
            count++;

         n/=2;
         t++;
     }
     printf("The parity of ");
     for(int i=t-1;i>=0;i--)
        printf("%d",a[i]);

     printf(" is %d (mod 2).\n",count);
 }




    return 0;
}
