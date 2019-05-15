Code 1:

#include<stdio.h>
int square(int a){
int result=a*a;
return result;
}
int main(){
int n;
printf("Enter a value\n");
scanf("%d", &n);
int ans=square(n);
printf("The square value for your input: %d\n", ans);
return 0;
}

Code 2:

#include<stdio.h>
int summation(int a, int b){
int result=a+b;
return result;
}
int main(){
int val1,val2,sum=0;
printf("Enter two value a & b:\n");
scanf("%d %d", &val1,&val2);
sum=summation(val1,val2);
printf("Summation of your given value is: %d\n", sum);
return 0;
}

Code 3:

#include<stdio.h>
int main(){
int n,j,i;
printf("Enter your array size:\n");
scanf("%d", &n);
int a[n];
printf("Enter %d array values: \n", n);
for(i=0;i<n;i++){
    scanf("%d", &a[i]);
}
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
return 0;
}

Code 4:

#include<stdio.h>
int main(){
int n,j,i;
printf("Enter your array size:\n");
scanf("%d", &n);
int a[n];
printf("Enter %d array values: \n", n);
for(i=0;i<n;i++){
    scanf("%d", &a[i]);
}
for(i=n-1;i>=0;i--){
    printf("%d ",a[i]);
}
return 0;
}

Code 5:

 #include<stdio.h>
int main(){
int n,j,i,sum=0;
printf("Enter your array size:\n");
scanf("%d", &n);
int a[n];
printf("Enter %d array values: \n", n);
for(i=0;i<n;i++){
    scanf("%d", &a[i]);
}
for(i=0;i<n;i++){
    sum+=a[i];
    printf("i=%d a[i]=%d sum=%d \n", i,a[i],sum);
}
printf("Sum of your values: %d\n", sum);
return 0;
}

Code 6:

#include<stdio.h>
int main(){
int n,j,i;
printf("Enter your array size:\n");
scanf("%d", &n);
int a[n],even[n],odd[n];
printf("Enter %d array values: \n", n);
for(i=0;i<n;i++){
    scanf("%d", &a[i]);
}
int ev=0,od=0;

for(i=0;i<n;i++){
    if(a[i]%2==0){
        even[ev]=a[i];
    ev++;
    }
    else{
        odd[od]=a[i];
          od++;
    }
}

     printf("Even value is:\n");
    for(i=0;i<n;i++){
        printf("%d ", even[i]);
    }
printf("\nOdd value is:\n");
    for(i=0;i<n;i++){
        printf("%d ", odd[i]);
    }
return 0;
}




