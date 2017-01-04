#include<bits/stdc++.h>
using namespace std;

int main()
{

char c[1000];
    int i,j,sum,count=0;
    int n;

    scanf("%d",&n);
     scanf("%d",&n);

    for(j=0;j<n;j++){
        gets(c);
        sum=0;
        int flag=1;
        for(i=0;c[i]!='\0';i++)
        {


            if(c[i] == 'o' || c[i] == 'O')
            {

                sum+=flag;
                flag++;
            }
            else{

                flag=1;
            }


        }

        printf("%d\n",sum);

    }

}

