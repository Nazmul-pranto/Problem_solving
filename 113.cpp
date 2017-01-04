#include<bits/stdc++.h>
using namespace std;
int main()
{

   double a,b,ans;
   while(scanf("%lf%lf",&b,&a) == 2){

    ans=pow(a,1/b);
    printf("%.0lf\n",ans);
   }


    return 0;
}
