#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{

 int n,a=1;

 for(int i=2;a!=1500;i++)
 {
     if(i %2 == 0 || i%3 == 0 ||i%5 ==0){

        a++;
     }
     if(a==1500){
        printf("The 1500'th ugly number is %d.\n",i);
     }

 }

    return 0;
}
