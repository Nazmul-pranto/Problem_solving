#include<iostream>
#include<math.h>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{

long len,count=0,count1=0,count2=0,count3=0,count4=0,n=0,leap=0;
char c[1000000];
while(gets(c)){
        len=strlen(c);
        if(n!=0){
            printf("\n");
        }
        n=1;
           count=0,count1=0,count2=0,count3=0,count4=0,leap=0;
           int flag=0;
        for(int i=0;i<len;i++){

                count = ((count * 10) + (c[i]-'0')) % 4;
                count1 = ((count1 * 10) + (c[i]-'0')) % 100;

                count2 = ((count2 * 10) + (c[i]-'0')) % 400;

                count3 = ((count3 * 10) + (c[i]-'0')) % 15;
                count4 = ((count4 * 10) + (c[i]-'0')) % 55;


        }


        if(((count==0)&&(count1!=0))||(count2==0)){

             printf("This is a leap year.\n");
             flag=1;
             leap=1;
        }
        if(count3==0){
            printf("This is huluculu festival year.\n");
            flag=1;
        }
        if(leap=1  && count4==0){

            printf("This is bulukulu festival year.\n");
        }

        if(flag==0){

            printf("This is an ordinary year.\n");
        }

}




return 0;
}
