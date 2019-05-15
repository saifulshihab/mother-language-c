#include<stdio.h>
int main()
{
    int pizza_no,burger_no;
    float pizza_price,burger_price,sum,discount_amount;
    printf("Enter pizza price, burger price, pizza no, burger no :\n");
    scanf("%f %f %d %d", &pizza_price,&burger_price,&pizza_no,&burger_no);
    sum=(pizza_price*pizza_no)+(burger_price*burger_no);
    printf("Total: %.2f\n", sum);
    //apply vat
    float vat_amount=sum*0.15;
    sum=sum+vat_amount;
    if(sum>2000){
        discount_amount=sum*0.05;
    sum=sum-discount_amount;
    }
    printf("Vat=%.2f\n", vat_amount);
    printf("Discount=%.2f\n", discount_amount);
    printf("Total Taka = %.2f\n", sum);
    return 0;

}
