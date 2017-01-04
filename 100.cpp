#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
int main()
{
int a,x,y;
double c,f;
cin>>a;
for(int i=1;i<=a/2;i++)
{
    cin>>x>>y;
    c=(x*x)/2.0;
    f=(y*y)/2.0;
    printf("land 1: %0.5lf\n",c);
   printf("Land 2: %0.5lf",f);

}
return 0;
}
