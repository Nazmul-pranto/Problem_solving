#include<iostream>
#include<stdio.h>
#include<string.h>


using namespace std;

int main()
{
char input[10000],x;
int a[26],i,j,n,t;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    gets(input);
   for(j=0;j<26;j++)
   {
       a[j]=0;
   }

    for(int k=0;input[k] != '\0' ;k++){

        if((input[k] >='a' && input[k]<='z') || (input[k] >='A' && input[k]<='Z') )
        {
          a[input[k]-'a']++;

        }
    }

    for(int y=1;y<26;++y)
    {
        if(a[0]<a[y])
        {
            a[0]=a[y];
        }
    }
   printf("%d\n",a[0]);

    for(t=0;t<26;t++){

        if(a[t] != 0)
        {
            printf("%c appears %d times \n",t+'a',a[t]);
        }
    }


}

}

