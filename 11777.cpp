#include  <stdio.h>
#include <iostream>
#include<algorithm>
using namespace std;

int main(){
int n,a[4],b[3];
cin>>n;
for(int i=1;i<=n;i++)
{
    int sum=0;

    for(int j=0;j<4;j++)
    {
        cin>>a[j];
        sum+=a[j];
    }
    for(int j=0;j<3;j++)
    {
        cin>>b[j];
    }

    sort(b,b+3);

    double avg=(b[1]+b[2])/2.0;

    sum+=avg;

    if(sum>=90 && sum<=100)
    {
        printf("Case %d: A\n",i);
    }
    else if(sum>=80 && sum<90)
    {
        printf("Case %d: B\n",i);
    }
    else if(sum>=70 && sum<80)
    {
        printf("Case %d: C\n",i);
    }
     else if(sum>=60 && sum<70)
    {
        printf("Case %d: D\n",i);
    }
    else{

    printf("Case %d: F\n",i);

    }

}

 return 0;
}
