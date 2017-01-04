#include<bits/stdc++.h>

using namespace std;

int main()
{

 int a;
 cin>>a;

 long long n,sm;

    for(int j=0;j<a;j++)
    {
    sm=0;

   cin>>n;
   sm=(sqrt(1+8*n) -1)/2;
   printf("%lld\n",sm);

   }



    return 0;
}
