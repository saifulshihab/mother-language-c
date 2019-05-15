#include<stdio.h>
int main(){
struct shop{
int pn;
float pp;
float tp;
}sp[5];
int i,sum=0;
for(i=0;i<5;i++){
printf("Product price & product no\n");
    scanf("%f %d", &sp[i].pp,&sp[i].pn);
}
for(i=0;i<5;i++){
sp[i].tp=sp[i].pp*sp[i].pn;
sum=sum+sp[i].tp;
}
float vat,dis;
vat=sum*15/100;
dis=sum*10/100;
printf("Vat amount: %2f\n",vat);
printf("Discount amount: %2f\n",dis);
float total_amount=sum+vat;
float actual=total_amount-dis;
printf("Actual : %2f\n",actual);
if(actual>10000){
    printf("Gift=1000\n");
printf("Payble=%.2f",actual-1000);
}
else
    printf("Payble=%.2f",actual);
}
