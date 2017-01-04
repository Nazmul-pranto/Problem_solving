#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
int main()
{


char c[1000];
while(gets(c)){
    for(int i=0;c[i] != '\0';i++)
    {
        int j=("%d",c[i]) -3 ;
        printf("%c",j);

    }
  cout<<endl;
}

return 0;
}
