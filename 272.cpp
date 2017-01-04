#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;
int main()
{

long k=0;
char c[100000];
while(gets(c)){

        long l=0,i;
         l=strlen(c);

   for( i=0;i<l;i++)
   {

       if(c[i] == '"')
{
       k++;
           if(k%2==1){
            printf("``");

           }

           else{
            printf("''");
           }
       }
       else{
        printf("%c",c[i]);
       }



   }

   printf("\n");
}

return 0;
}
