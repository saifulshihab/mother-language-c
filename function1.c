#include<stdio.h>
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
float div(int a,int b){
if(b != 0){
float result=a/b;
return result;
}
else{
    printf("wrong");
}
}
int main(){
    int a,b;
    printf("Enter value for sum:\n");
    scanf("%d %d", &a,&b);
    printf("Sum of: %d\n", add(a,b));
        printf("Enter value for sub:\n");
    scanf("%d %d", &a,&b);
    printf("Sub: %d\n", sub(a,b));
        printf("Enter value for multi:\n");
        scanf("%d %d", &a,&b);
    printf("Multi: %d\n", multi(a,b));
        printf("Enter value for div:\n");
        scanf("%d %d", &a,&b);
    printf("Div: %.2f\n", div(a,b));
}
                                        /*another system*/

/*#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int multi(int a,int b);
int div(int a,int b);

int main(){
    int a,b;
    printf("Enter value for sum:\n");
    scanf("%d %d", &a,&b);
    printf("Sum of: %d\n", add(a,b));
        printf("Enter value for sub:\n");
    scanf("%d %d", &a,&b);
    printf("Sub: %d\n", sub(a,b));
        printf("Enter value for multi:\n");
        scanf("%d %d", &a,&b);
    printf("Multi: %d\n", multi(a,b));
        printf("Enter value for div:\n");
        scanf("%d %d", &a,&b);
    printf("Div: %.2f\n", div(a,b));
}
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
*/


