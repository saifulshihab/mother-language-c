
#include<stdio.h>
#define MAXSTK 10
struct stack{
int stk[MAXSTK];
int top;
};
typedef struct stack STACK;
STACK s;

void push(void);
int pop(void);
void display(void);
void large(void);
void counts(void);
void summation(void);
void main(){
int n;
int option=1;
s.top = -1;
printf("STACK OPERATION\n");
while(option){
printf("1. PUSH\n");
printf("2. POP\n");
printf("3. Display  all elements from this Stack.\n");
printf("4. Find The largest number from this Stack\n");
printf("5. Summation of all elements in this Stack \n");
printf("6. Number of elements in this Stack  \n");
printf("7. Exit.\n");
printf("Select an Operation: ");
scanf("%d",&n);
switch(n){
case 1:
    system("CLS");
    push();
break;
case 2:
    system("CLS");
    pop();
break;
case 3:
    system("CLS");
    display();
    break;
case 4:
    system("CLS");
    large();
break;
case 5:
    system("CLS");
    summation();
    break;
case 6:
    system("CLS");
    counts();
    break;
case 7:
    return;

    }
    fflush(stdin);
    printf("\nDo you want to continue (Type 0 or 1)?\n");
    scanf("%d",&option);
}
}

void push()
{
    int num;
    if(s.top == (MAXSTK-1))
    {
        printf("STACK is Full\n");
        return;
    }
    else
    {
        printf("Enter the element to be Pushed\n");
        scanf("%d",&num);
        s.top=s.top+1;
        s.stk[s.top]=num;
    }
    return;
}

int pop()
{
  int num;
  if(s.top == -1)
  {
      printf("STACK is Empty\n");
      return (s.top);
  }
  else
  {
      num=s.stk[s.top];
      printf("Poped element is = %d\n",num);
      s.top=s.top-1;
  }
  return (num);
}
void display()
{
    int i;
    if(s.top == -1)
    {
        printf("STACK is Empty\n");
        return;
    }
    else
    {
        printf("\nThe status of the stack is \n");
        for(i=s.top;i>=0;i--){
        printf("%d\n",s.stk[i]);
    }

    printf("\n");

}
}

large(){
    int i,lrg=0;
     printf("\nThe status of the stack is \n");
        for(i=s.top;i>=0;i--){
        printf("%d ",s.stk[i]);;
}
for(i=s.top;i>=0;i--){
    if(s.stk[i] > lrg){
        lrg=s.stk[i];
    }
}
printf("\n\nLargest element of this stack is : %d\n\n\n\n",lrg);
return;

}
summation(){
    int i;
int sum=0;
     printf("\nThe status of the stack is \n");
        for(i=s.top;i>=0;i--){
        printf("%d ",s.stk[i]);;
}

for(i=s.top;i>=0;i--){
    sum=sum+s.stk[i];
}
printf("\n\nSummation of all elements: %d\n\n\n",sum);

}
counts(){
int i,m=0;
     printf("\nThe status of the stack is \n");
        for(i=s.top;i>=0;i--){
        printf("%d ",s.stk[i]);;
}

for(i=s.top;i>=0;i--){
    m++;
}
printf("\n\nNumber of elements in this Stack: %d\n\n\n",m);

}
