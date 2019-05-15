#include<stdio.h>
int main()
{
    int c,r,n;
    scanf("%d", &n);
    for(r=n;r<=4;r++)
    {
        for(c=1;c<=r;c++)
          printf("%d", r);
    printf("\n");
    }
    return 0;
}

