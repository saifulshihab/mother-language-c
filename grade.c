#include<stdio.h>
int main()
{
    int mark;
    scanf("%d", &mark);
    if(mark>40 && mark<50)
        printf("PASS");
        else
            printf("fail");
    return 0;
}
