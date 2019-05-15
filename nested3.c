#include<stdio.h>
int main(){
int a,b;
for(a=1;a<=5;a++){
    for(b=1;b<=a;b++)
        printf("%d",a);
    printf("\n");
}
}
