#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>

using namespace std;
int main()
{

int n,m,b,rev=0,p,ans;
while(scanf("%d %d",&m,&n)==2)
{
    ans=m,rev=0;
  while(m>=n)
  {
      ans+=m/n;
      rev=m%n;
     m=rev+(m/n);
  }

    printf("%d\n",ans);
}

return 0;
}
