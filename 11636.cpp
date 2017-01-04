#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,c=1,a=1,sum[10001];

    sum[0]=1;
   for(int i=1;i<10001;i++)
   {
       sum[i]=sum[i-1]*2;

   }



   while(cin>>n && n>0)
   {
       if(n==1)
               printf("Case %d: 0\n",c);

       else{

            for(int i=1;i<10001;i++)
       {
           if(n==sum[i]){

            printf("Case %d: %d\n",c,i);
               break;
           }


           else{

                if(n>sum[i] && n<sum[i+1])
               {
                   printf("Case %d: %d\n",c,i+1);
                   break;
               }
           }

         }
       }
       c++;

   }

    return 0;
}
