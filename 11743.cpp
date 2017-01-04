#include  <stdio.h>
#include <iostream>
#include<algorithm>
using namespace std;

int main(){
int n,a[4],sum1=0,sum2=0,flag=0;

cin>>n;

for(int i=0;i<n;i++)
{

    for(int j=0;j<4;j++)
    {

        cin>>a[j];
        int rev;
        flag=0;
        while(a[j] !=0)
        {
            rev=a[j]%10;
            a[j]/=10;

            if(flag==0)
            {
                sum2+=rev;
                flag=1;
            }
            else{
                    int tmp=2*rev;
                    int rev1=0;
                if(tmp>=10)
                {
                    while(tmp!=0)
                    {
                        rev1=tmp%10;
                        tmp/=10;
                        sum1+=rev1;

                    }


                }

                else{
                    sum1+=tmp;
                }
                flag=0;

            }
        }
    }

    int sum=sum1+sum2;

    if(sum%10==0)
    {
        printf("Valid\n");
    }
    else{
        printf("Invalid\n");
    }
    sum=0,sum1=0,sum2=0,flag=0;

}

 return 0;
}
