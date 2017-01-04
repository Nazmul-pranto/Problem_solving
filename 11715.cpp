#include  <stdio.h>
#include <iostream>
#include<math.h>
using namespace std;

int main(){

double a,b,c,d,e;
int n;
 int flag=1;

while(scanf("%d",&n) && n)
{

    a=0,b=0,c=0,d=0,e=0;
    scanf("%lf %lf %lf",&a,&b,&c);

    if(n==1)
    {
        d=(b-a)/c;
        e=(a*c)+(0.5*d*c*c);
        printf("Case %d: %.3lf %.3lf\n",flag,e,d);
        flag++;
    }

    else if(n==2)
    {
        d=(b-a)/c;
        e=(a*d)+(0.5*d*c*d);
        printf("Case %d: %.3lf %.3lf\n",flag,e,d);
        flag++;
    }
      else if(n==3)
    {
        d=sqrt((a*a)+(2*b*c));
        e=(d-a)/b;
        printf("Case %d: %.3lf %.3lf\n",flag,d,e);
        flag++;
    }
     else
    {
        d=sqrt((a*a)-(2*b*c));
        e=(a-d)/b;
        printf("Case %d: %.3lf %.3lf\n",flag,d,e);
        flag++;
    }
}



 return 0;
}
