#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
int main()
{
long n,b,h,w,p,a,cost=15000000,amount;

while(cin>>n>>b>>h>>w)
{

    cost=15000000;
    for(int i=0;i<h;i++)
    {
        cin>>p;
        amount=0;
        for(int j=0;j<w;j++)
        {
            cin>>a;

                if(a>=n)
                {
                    amount=p*n;

                    if(amount<cost)
                        cost=amount;
                }
        }



    }
    if(cost>b)
    {
        printf("stay home\n");
    }
    else{
        printf("%ld\n",cost);
    }


}


return 0;
}
