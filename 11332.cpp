#include<iostream>
#include<stdio.h>
#include<string.h>


using namespace std;

int main()
{

long long int a;

while( (cin>>a )&& (a!=0 ))
{

    int sum=0;

    while(a >= 10)
    {
        sum=0;
        while( a != 0)
        {
            sum+=a%10;
            a/=10;
        }

        a=sum;
    }

    printf("%lld\n",a);
}

}

