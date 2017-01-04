#include  <stdio.h>
#include <iostream>
#include<string.h>
using namespace std;

int main(){
char a[21],b[21];

int n;
cin>>n;
for(int j=0;j<n;j++)
{
   scanf("%s",a);
   scanf("%s",b);

    int m,n;
    m=strlen(a);
    n=strlen(b);



    int flag=0;
    if(m != n){
        printf("No\n");

    }

    else
    {
        for(int i=0;a[i] != '\0';)
        {
            if(a[i]=='a' || a[i]=='e' || a[i] =='i' || a[i]=='o' || a[i] == 'u')
            {
                flag=0;
                i++;
            }
            else{
                if(a[i]!=b[i])
                {
                    flag++;
                    break;
                }
                i++;
            }

        }

        if(flag==0){
                        cout<<"Yes"<<endl;

        }

        else{
                        cout<<"No"<<endl;

        }

    }



}


 return 0;
}
