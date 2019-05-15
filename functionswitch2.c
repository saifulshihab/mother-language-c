#include<stdio.h>
int sum(int a,int b);
int substact(int a,int b);
int multiplay(int a,int b);
double devision(int a,int b);

int main()
{
    int operation,result,v1,v2;
    double result2;
    printf("Enter Two values a & b :\n");
    scanf("%d%d",&v1,&v2);
    printf("Please choose what you want to do with your values\n");
    printf("1- Sum\n");
    printf("2- Substraction\n");
    printf("3- Multiply\n");
    printf("4- Devision\n");
    scanf("%d",&operation);
    switch(operation)
    {
      case 1:
        result = sum(v1, v2);
        printf("sum of two values = %d\n",result);
        break;

      case 2:
        result = substact(v1, v2);
        printf("substract of two values = %d",result);
        break;

      case 3:
        result = multiplay(v1, v2);
        printf("multiply of two values = %d\n",result);
        break;

      case 4:
        result2 = devision(v1, v2);
        printf("division of two values = %.2f\n",result2);
        break;
      default:
        printf("wrong choice\n");
    }
return 0;
}

int sum(int a,int b)
    {
    int sum=0;
    sum=a+b;
    return sum;
    }
int substact(int a,int b)
    {
    int sub=0;
    sub=a-b;
    return sub;
    }
int multiplay(int a,int b)
    {
    int mult=0;
    mult=a*b;
    return mult;
    }
double devision(int a,int b)
    {
        double  devi=0;
        if(b != 0){
    devi=a/b;
    return devi;
        }
        else
            printf("b can not be zero\n");
    }
                                 /*another system*/

/*#include<stdio.h>
int add(int a,int b){
int result=a+b;
return result;
}
int sub(int a,int b){
int result=a-b;
return result;
}
int multi(int a,int b){
int result=a*b;
return result;
}
int div(int a,int b){
int result=a/b;
return result;
}

int main(){
    int val,val2;
printf("Entre your values:\n");
scanf("%d %d", &val,&val2);
int operation;
printf("What you want to do with your values?\n");
printf("1-Sum\n");
printf("2-Sub\n");
printf("3-multi\n");
printf("4-Div\n");
scanf("%d", &operation);

switch(operation){
case 1:
printf("Sum is: %d", add(val,val2));
break;
case 2:
printf("Sub is: %d", sub(val,val2));
break;
case 3:
printf("Multi is: %d", multi(val,val2));
break;
case 4:
printf("Div is: %d", div(val,val2));
break;
default:
    printf("Wrong choice");
}

}
*/


