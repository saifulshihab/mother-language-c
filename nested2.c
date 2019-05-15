#include<stdio.h>
int main(){
int a,b,n;
scanf("%d", &n);
for(a=1;a<=n;a++){
    for(b=1;b<=a;b++)
        printf("%d %d %d",a+1,b-1,n);
        printf("\n");
}

}
