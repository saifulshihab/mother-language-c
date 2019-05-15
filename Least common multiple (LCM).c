#include <stdio.h>

int main(){

    int a,b,lcm;
    int x[100],i,n;
    printf("how many umber : ");
     scanf("%d",&n);

     printf("Enter array element : ");
     for(i=0;i<n;i++)
     scanf("%d",&x[i]);

a=x[0];
for(i=1;i<n;i++)
{

if(a>x[i]){
    lcm=a;
}
else
    lcm=x[i];

     while(1) {
        if(lcm%a==0 && lcm%x[i]==0)
        break;
        lcm++;
     }
     a=lcm;
}
     printf("LCM is : %d",a);

}


