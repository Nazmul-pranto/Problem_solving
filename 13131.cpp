#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{

    long long t,n,k,sum,i,j;

    scanf("%lld",&t);

    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&n,&k);

        if(n%k !=0 )
        {
            sum=n;
        }
        else
        {
            sum=0;
        }
        for(j=1;j<=n/2;j++)
        {
            if(n%j==0)
            {
                if(j%k != 0 )
                {
                    sum+=j;
                }
            }
        }

        printf("%lld\n",sum);
    }
}
