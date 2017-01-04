#include<stdio.h>

main(){
    //freopen("input.txt","r",stdin);
  //  freopen("output.txt","w",stdout);
    int i,j;
    while(scanf("%d%d",&i,&j) != EOF){
        int a,b=j,maxCycle=0;
        if(i<=j){
            for(a=i; a<=b; a++){
                int n=a,countCycle=0;
                    while(1){
                        if(n == 1){
                            countCycle++;
                            if(maxCycle < countCycle){
                                maxCycle=countCycle;
                            }
                            break;
                        }
                        if(n&1){
                            n =3*n+1;
                            countCycle++;
                        }else{
                            n=n>>1;
                            countCycle++;
                        }
                    }
            }
        }
        if(i>j){
            for(a=j; a<=i; a++){
                int n=a,countCycle=0;
                    while(1){
                        if(n == 1){
                            countCycle++;
                            if(maxCycle < countCycle){
                                maxCycle=countCycle;
                            }
                            break;
                        }
                        if(n&1){
                            n =3*n+1;
                            countCycle++;
                        }else{
                            n=n>>1;
                            countCycle++;
                        }
                    }
            }
        }
    printf("%d %d %d\n",i,j,maxCycle);
    }
    return 0;
}
