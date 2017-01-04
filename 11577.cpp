#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
int main()
{
char c[201],s;
int a[26],top,n;
scanf("%d",&n);
getchar();

for(int i=0;i<n;i++)
{
    gets(c);
    for(int j=0;j<26;j++)
    {
        a[j]=0;
    }

    top=0;
    for(int j=0;c[j] != '\0' ;j++)
    {
        if(c[j]>='A' && c[j]<='Z')
        {
           a[c[j]-'A']++;
        }

       else if(c[j]>='a' && c[j]<='z')
        {
           a[c[j]-'a']++;
        }
    }

    for(int j=0;j<26;j++)
    {
        if(top<a[j])
        {
            top=a[j];
        }
    }

    for(int j=0;j<26;j++)
    {
        if(a[j]==top)
        {
            printf("%c",j+'a');
        }
    }

    cout<<endl;
}




return 0;
}
