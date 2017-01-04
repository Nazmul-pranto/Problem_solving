#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
int main()
{

long int n,a,b,c,flag=0;

cin>>n;
for(long int i=0;i<n;i++)
{
    cin>>a>>b>>c;
        if((a+b <= c) || (b+c<=a) || (c+a<=b) )
        {
            printf("Case %ld: Invalid\n",i+1);
        }
       else if(a<=0 || b<=0 || c<=0)
       {
             printf("Case %ld: Invalid\n",i);
       }
        else if(a==b && b==c)
        {
            printf("Case %ld: Equilateral\n",i+1);
        }
        else if(a==b || a==c || b==c )
        {
             printf("Case %ld: Isosceles\n",i+1);
        }
        else{
            printf("Case %ld: Scalene\n",i+1);
        }
}

return 0;
}
