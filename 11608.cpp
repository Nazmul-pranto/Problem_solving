#include<bits/stdc++.h>

using namespace std;

int main()
{

int a=1,p,n[15],m[15],sum=0;

    while(cin>>p && p>=0)
    {


        for(int i=1;i<13;i++)
        {
            cin>>n[i];
        }
    n[0]=p;
        for(int j=0;j<12;j++)
        {
            cin>>m[j];
        }

        printf("Case %d:\n",a);
        for(int i=0;i<12;i++)
        {


           if(p>=m[i])
           {
                p-=m[i];
               cout<<"No problem! :D"<<endl;

           }
           else{
             cout<<"No problem. :("<<endl;
           }
            p+=n[i+1];
        }
        a++;
    }

    return 0;
}
