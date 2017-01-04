#include  <stdio.h>
#include <iostream>

using namespace std;

int main(){

int a,b,c,reuse=0,eat=0,mod=0,n;
cin>>n;

for(int i=0;i<n;i++)
{
    cin>>a>>b>>c;
    reuse=0,eat=0,mod=0;
    a+=b;
   eat=a/c;
   mod=a%c;
   a=eat + mod;
   reuse+=eat;
   while(a>=c)
   {
       eat=a/c;
       mod=a%c;
       reuse+=eat;
       a=eat +mod;
   }

   printf("%d\n",reuse);

}

 return 0;
}
