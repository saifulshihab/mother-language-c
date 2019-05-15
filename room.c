#include<stdio.h>
int main()
{
    int a,b,c,d,rr=2500,miss,drop,meal,month,payed;
    printf("\n\n\n\n\n\n\t\t\t\t\t\t");
    printf("How many day in this month: ");
    scanf("%d",&month);
            printf("\n\n\n\n\t\t\t\t\t\t");
    printf("How many meal you dropped? ");
    scanf("%d",&miss);
            printf("\n\n\n\n\t\t\t\t\t\t");
        printf("Enter Payed Taka: ");
    scanf("%d",&payed);
    drop=miss*30;
    a=rr+1800-drop;
    b=rr+1860-drop;
    c=rr+1680-drop;
    d=rr+1740-drop;
    if(month==30){
                        printf("\n\n\n\n\t\t\t\t\t\t");
        printf("Total Payable Taka = %d/=\n",a);
            printf("\n\t\t\t\t\t\t");
            printf("Final Payable = %d\=\n\n\n\n\n\n\n",a-payed);


    }
    else if(month==28) {
                    printf("\n\n\n\n\t\t\t\t\t\t");
        printf("Total Payable Taka = %d/=\n",c);
                    printf("\n\t\t\t\t\t\t");
        printf("Final Payable = %d/=\n\n\n\n\n\n\n\n",c-payed);

    }else if(month==29){
     printf("\n\n\n\n\t\t\t\t\t\t");
        printf("Total Payable Taka = %d/=\n",d);
                    printf("\n\t\t\t\t\t\t");
        printf("Final Payable = %d/=\n\n\n\n\n\n\n\n",d-payed);
    }else{
     printf("\n\n\n\n\t\t\t\t\t\t");
        printf("Total Payable Taka = %d/=\n",b);
                    printf("\n\t\t\t\t\t\t");
        printf("Final Payable = %d/=\n\n\n\n\n\n\n\n",b-payed);
    }
    return 0;
}
