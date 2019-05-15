#include<stdio.h>
float CelToFer(float c);
float FerToCel(float f);
int main()
{
    int val,operation;
    printf("Enter a value:\n");
    scanf("%d", &val);
    printf("Please choose what you want to do with your value ?\n");
    printf("1- Celsius To Fahrenheit ?\n");
    printf("2- Fahrenheit To Celsius ?\n");
    scanf("%d",&operation);
    switch(operation)
    {
    case 1:
        float result;
        result=CelToFer(val);
        printf("Celsius To Fahrenheit : %.2f\n", result);
        break;

    case 2:

        result=FerToCel(val);
        printf("Fahrenheit To Celsius : %.2f\n", result);
        break;
        default:
            printf("Wrong Choice");
    }
    return 0;
}
float CelToFer(float c){
float CelToFer=(c*9)/5+32;
return CelToFer;
}
float FerToCel(float f){
float FerToCel=((f-32)*9)/32;
return FerToCel;
}


