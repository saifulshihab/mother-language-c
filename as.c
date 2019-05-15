#include <stdio.h>

int main()
{
    int total;
    scanf("%d",&total);
    int i,k,j;
    for(i=total;i>=1;i--){
        for(k=total-1;k>=i;k--){
            printf(" ");
        }
        for(j=i;j>=1;j--){
            printf("S ");
        }
        printf("\n");
    }


    return 0;
}
