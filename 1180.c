#include <stdio.h>
#include<math.h>
int main()
{
 long long  n, i, j,m,o,sum=0;
    scanf("%lld",&n);

   for(j=0;j<n;j++){

  sum=0;
    scanf("%lld",&o);
    m=(pow(2,o-1))* (pow(2,o) - 1);

   for(i=1; i<=m/2; i++)
    {
        if(m%i==0)
        {
            sum+=i;
        }
    }
        if (sum==m){
        printf("Yes\n");

    }
   else{
    printf("No\n");
}

}
   return 0;
}
