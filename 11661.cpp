#include<bits/stdc++.h>
using namespace std;
int main()
{

int a;
char c[2000000];
while(scanf("%d",&a) && a)
{
    gets(c);
    gets(c);
    int flag =0,count=0,loc1=0,loc2=0;
    for(int i=0;c[i] != '\0';i++)
    {
        if(count !=0)
        {
            break;
        }

        if(c[i]=='Z')
        {
            flag++;
            cout<<"0"<<endl;
            break;
        }

       if(c[i]=='D')
       {
           loc1=i;
           for(int j=i+1;c[j]!='\0';)
           {
               if(c[j]=='Z')
               {
                   cout<<"0"<<endl;
                   count++;
                   break;
               }
              else if(c[j]=='D')
               {
                   loc1=j;
                   j++;
               }
               else if(c[j]=='R')
               {
                   loc2=j;
                   count++;
                   break;

               }
               else{
                j++;
               }
           }

       }
       if(count!=0)
       {
           break;
       }
           if(c[i]=='R')
       {
           loc1=i;
           for(int j=i+1;c[j]!='\0';)
           {
               if(c[j]=='Z')
               {
                   cout<<"0"<<endl;
                   count++;
                   break;
               }
              else if(c[j]=='R')
               {
                   loc1=j;
                   j++;
               }
               else if(c[j]=='D')
               {
                   loc2=j;
                   count++;
                   break;

               }
               else{
                j++;
               }
           }
       }

    }
    if(flag==0)
     cout<<(loc2-loc1)<<endl;
}
    return 0;
}
