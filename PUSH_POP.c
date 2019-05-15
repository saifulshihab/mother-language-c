
#include<stdio.h>
#define MAXSTK 5
struct stack{
int stk[MAXSTK];
int top;
};
typedef struct stack STACK;
STACK s;

void push(void);
int pop(void);
void display(void);

void main(){
int choice;
int option=1;
s.top = -1;
printf("STACK OPERATION\n");
while(option){
    printf("1. PUSH\n");
    printf("2. POP\n");
    printf("3. DISPLAY\n");
    printf("4. EXIT\n");

    printf("Enter Your Choice\n");
    scanf("%d",&choice);
    switch(choice){
case 1:
    push();
    break;
case 2:
    pop();
    break;
case 3:
    display();
    break;
case 4:
    return;
    }
    fflush(stdin);
    printf("Do you want to continue (Type 0 or 1)?\n");
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



