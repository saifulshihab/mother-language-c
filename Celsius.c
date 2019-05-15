#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter Temperature in Celsius:");
    scanf("%f", &c);
    f=((c*9)/5+32);
    printf("Temperature in Fahrenheit is: %.2f", f);
    return 0;


}
