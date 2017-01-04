#include<bits/stdc++.h>

using namespace std;

int main()
{

    int sum=0,n;
   char s[1000],c;
    int p=1;
     scanf("%d",&n);
     getchar();
   for(int i=0;i<n;i++)
   {
       gets(s);
        sum=0;
       for(int j=0;s[j] !='\0';j++)
       {
           if(s[j]=='a' || s[j]=='d' || s[j]=='g' ||s[j]=='j' ||s[j]=='m' ||s[j]=='p' ||s[j]=='t' ||s[j]=='w' || s[j] == ' ')
           {
               sum+=1;
           }
           else if(s[j]=='b' || s[j]=='e' || s[j]=='h' ||s[j]=='k' ||s[j]=='n' ||s[j]=='q' ||s[j]=='u' ||s[j]=='x')
           {
               sum+=2;
           }
            else if(s[j]=='c' || s[j]=='f' || s[j]=='i' ||s[j]=='l' ||s[j]=='o' ||s[j]=='r' ||s[j]=='v' ||s[j]=='y')
           {
               sum+=3;
           }
           else if(s[j] =='z' || s[j]=='s')
           {
               sum+=4;
           }

       }
       printf("Case #%d: %d\n",p,sum);
       p++;

   }
    return 0;
}
