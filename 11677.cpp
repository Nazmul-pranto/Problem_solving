#include<bits/stdc++.h>
using namespace std;
int main()
{

int a,b,m,n,t1,t2,dif;

while(scanf("%d %d %d %d",&a,&b,&m,&n) )
{
    if(a==0 && b==0 && m==0 && n==0)
    {
        break;
    }

    t1=0,t2=0,dif=0;
    t1=(a*60)+b;
    t2=(m*60)+n;

    if(t1>t2)
    {
        printf("%d\n",1440-(t1-t2));

    }
    else{
        printf("%d\n",t2-t1);
    }
}

    return 0;
}
