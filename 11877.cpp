#include  <stdio.h>
#include <iostream>

using namespace std;

int main(){

int a,reuse=0,eat=0,mod=0;

while (scanf("%d",&a) && a)
{
    reuse=0,eat=0,mod=0;
   eat=a/3;
   mod=a%3;
   a=eat + mod;
   reuse+=eat;
   while(a>=3)
   {
       eat=a/3;
       mod=a%3;
       reuse+=eat;
       a=eat +mod;
   }
   if(a==2)
   {
       reuse++;
   }
   printf("%d\n",reuse);

}

 return 0;
}
