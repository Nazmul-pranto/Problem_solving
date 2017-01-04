#include<iostream>
#include<math.h>
#include<cstdio>
#include<algorithm>

using namespace std;
int main()
{
int n,a[4];

cin>>n;

while(n)
{
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a,a+4);

    if((a[0]==a[1]) && (a[1]==a[2]) && (a[2]==a[3]))
        cout<<"square"<<endl;
    else if ( (a[0]==a[1]) && (a[2]==a[3]))
        cout<<"rectangle"<<endl;

    else if( (a[0]+a[1]+a[2]) > a[3] )
        cout<<"quadrangle"<<endl;

    else
        cout<<"banana"<<endl;

    n--;
}

return 0;
}
