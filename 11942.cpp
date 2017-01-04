#include<bits/stdc++.h>
using namespace std;

int main()
{

int n,a[10];
cin>>n;

for(int i=0;i<n;i++)
{
    int tmp=0;
    int flag=0,count =0;
    for(int j=0;j<10;j++)
    {
        cin>>a[j];

    }

   if(a[0]<a[1] && a[1]<a[2] && a[2]<a[3] && a[3]<a[4] && a[4]<a[5] && a[5]<a[6] && a[6] <a[7] && a[7]<a[8] && a[8]<a[9] && a[9]<a[10])
   {
       flag=1;
   }
   else if (a[0]>a[1] && a[1]>a[2] && a[2]>a[3] && a[3]>a[4] && a[4]>a[5] && a[5]>a[6] && a[6] >a[7] && a[7]>a[8] && a[8]>a[9] && a[9]>a[10])
   {
       count =1;
   }
   else{

    flag=0;
    count=0;
   }
   printf("Lumberjacks:\n");

   if(flag==1 || count ==1)
   {
       printf("Ordered\n");
   }
   else{
    printf("Unordered\n");
   }


}

}
