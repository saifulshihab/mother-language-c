#include<stdio.h>
int shirt_price=2000,pant_price=3000,shoes_price=4000,belt_price=1500,shocks_price=200;
int main(){
struct shop{
int shirt_no=0,pant_no=0,shoes_no=0,belt_no=0,shocks_no=0;
float sum=0.0;
};
int i,n;
printf("How many people?\n");
scanf("%d", &n);
struct shop sp[n];
    printf("Enter your item no respectively shirt,pant,shoe,belt,shock: \n");
for(i=0;i<n;i++){
    printf("Input for people:%d\n", i+1);
        scanf("%d %d %d %d %d", &sp[i].shirt_no,&sp[i].pant_no,&sp[i].shirt_no,&sp[i].belt_no,&sp[i].shocks_no);
}
for(i=0;i<n;i++){
    printf("\nOutput for people:%d\n",i+1);
    sp[i].sum=((sp[i].shirt_no*shirt_price)+(sp[i].pant_no*pant_price)+(sp[i].shoes_no*shoes_price)+(sp[i].belt_no*belt_price)+(sp[i].shocks_no*shocks_price));
    printf("\nTotal Purchase Amount: %.2f\n",sp[i].sum);
float discount_amount=sp[i].sum*10/100;
printf("Discount amount: %.2f\n",discount_amount);
float total_amount=sp[i].sum-discount_amount;
float vat_amount=total_amount*15/100;
printf("Vat amount: %2f\n",vat_amount);
float final_amount=total_amount+vat_amount;
printf("Final Amount: %.2f\n",final_amount);
if(final_amount>10000){
    printf("This person get BDT 1000 as a gift amount.\n");
    float actual_amount=final_amount-1000;
    printf("\nPayable Amount: %2f\n",actual_amount);
}
else{
    printf("\nActual Amount: %2f\n",final_amount);
}
}
return 0;
}
