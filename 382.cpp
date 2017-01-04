#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{

int a[100],sum,t=0;
while(scanf("%d",&a[t]) == 1){
    if(a[t]==0){
        break;
    }
    t++;
}
printf("PERFECTION OUTPUT\n");
for(int i=0;i<t;i++){
        sum=0;
        for(int j=1;j<=a[i]/2 ;j++){
            if(a[i] % j == 0){

            sum+=j;
            }
        }

        if(a[i] < 10 ){

              if(sum==a[i]){
            printf("    %d  PERFECT\n",a[i]);
        }
        else if(sum<a[i]){
            printf("    %d  DEFICIENT\n",a[i]);
        }
        else{
            printf("    %d  ABUNDANT\n",a[i]);
        }
        }

          else if(a[i] >= 10 && a[i] <100 ){

              if(sum==a[i]){
            printf("   %d  PERFECT\n",a[i]);
        }
        else if(sum<a[i]){
            printf("   %d  DEFICIENT\n",a[i]);
        }
        else{
            printf("   %d  ABUNDANT\n",a[i]);
        }
        }

        else  if(a[i] >=100 && a[i] <1000 ){

              if(sum==a[i]){
            printf("  %d  PERFECT\n",a[i]);
        }
        else if(sum<a[i]){
            printf("  %d  DEFICIENT\n",a[i]);
        }
        else{
            printf("  %d  ABUNDANT\n",a[i]);
        }
        }

         else if(a[i] >= 1000 && a[i] <10000 ){

              if(sum==a[i]){
            printf(" %d  PERFECT\n",a[i]);
        }
        else if(sum<a[i]){
            printf(" %d  DEFICIENT\n",a[i]);
        }
        else{
            printf(" %d  ABUNDANT\n",a[i]);
        }
        }

          else{

              if(sum==a[i]){
            printf("%d  PERFECT\n",a[i]);
        }
        else if(sum<a[i]){
            printf("%d  DEFICIENT\n",a[i]);
        }
        else{
            printf("%d  ABUNDANT\n",a[i]);
        }
        }

}
printf("END OF OUTPUT\n");
}

