
#include<stdio.h>

int main(){

     int A,N,i,s,result;

      scanf("%d %d",&A,&N);


           for(i=1;i<N;i++){
          s=A++;
           result=A + s;
           }
printf("%d",result);
}



