#include <iostream>
#include<stdio.h>
#include <algorithm>


using namespace std;
int main()
{
   int a;
   while(scanf("%d",&a) && a)
   {
       if(a==1 ||a==64 ||a== 729  ||a==4096  ||a==15625  ||a==46656  ||a==117649  ||a==262144  ||a==531441
 ||a==1000000  ||a==1771561  ||a==2985984 ||a==4826809 ||a==7529536  ||a==11390625 ||a==16777216 ||a==24137569 ||a==34012224
 ||a==47045881  ||a==64000000  ||a==85766121)
 printf("Special\n");

 else
  printf("Ordinary\n");

   }
}
