#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
int main()
{


long long a,b,n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a>>b;
    if(a>b){
        cout<<">"<<endl;
    }
    else if(a<b){
        cout<<"<"<<endl;
    }
    else {

        cout<<"="<<endl;
    }
}

return 0;
}
