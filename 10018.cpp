#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
 long long num, sum = 0, rem, rev=0,tmp=0;

long long  n,loc=0,flag=0;

 scanf("%lld", &n);

   while(n>0){
    scanf("%lld",&num);

    while(flag < 1){

    rem=0;
    rev=0;
    tmp=num;
        while(num > 0)
        {
            rem = num%10;
            rev= (rev*10) + rem;
            num = num/10;
        }


   sum=tmp+rev;

   rev=0;
   rem=0;
   num=sum;
        while(num > 0)
        {
            rem = num%10;
            rev= (rev*10) + rem;
            num = num/10;
        }
    loc++;
        if(sum==rev)
        {
            printf("%lld %lld\n",loc,rev);
            flag++;

        }
        else{

            num=rev;
        }

    }
    num=0;
    sum=0;
    loc=0;

    flag=0;
    n--;
   }

    return 0;
}
