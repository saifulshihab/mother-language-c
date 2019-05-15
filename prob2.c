#include<stdio.h>
int main()
{
 int a,b;
 char ch;
 printf("Enter a b & operation:\n");
 scanf("%d %d %c", &a,&b,&ch);
 if(ch=='+')
    printf("a+b=%d",(a+b));
 if(ch=='-')
    printf("a-b=%d", (a-b));
 if(ch=='*')
    printf("a*b=%d", (a*b));
 if(ch=='/' && b!=0)
    printf("a/b=%d", (a/b));
 return 0;
}

