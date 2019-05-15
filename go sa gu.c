
#include<stdio.h>
int main()
{
    int a,b,s,l,r;
    printf("Enter two integer number : ");
    scanf("%d %d",&a,&b);

    if(a>b){
        s=b;
        l=a;
    }else{
        s=a;
        l=b;
    }

    while((l%s) != 0){
        r=l%s;
        l=s;
        s=r;
    }

    printf("Go sa Gu is: %d",s);



}

