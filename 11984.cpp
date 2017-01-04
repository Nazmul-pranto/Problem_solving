#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,c,d;
double sum=0;

scanf("%d",&n);

for(int i=1;i<=n;i++)
{
  sum=0;
    scanf("%d %d",&c,&d);
    sum=((5.0/9.0)*d )+ c;
    printf("Case %d: %.2f\n",i,sum);
}


}
