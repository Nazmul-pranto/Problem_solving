#include<iostream>
#include<stdio.h>
#include<string.h>


using namespace std;

int main()
{
    int a[100],n,sum=0,t=1;

    while((scanf("%d",&n) )&& (n!=0) )
    {
        sum=0;

            for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        int div=sum/n;

       sum=0;
        for(int i=0;i<n;i++)
        {
            if(div<a[i])
            {
               sum+=a[i]-div;
            }

        }
       printf("Set #%d\nThe minimum number of moves is %d.\n\n",t,sum);
        t++;



        }


}

