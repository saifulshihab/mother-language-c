/*#include<stdio.h>
struct product{
char name[10];
float price;
};
int production(struct product prod[2]){
    for(int i=0;i<2;i++)
printf("\nProduct name: %s\nProduct price: %.2f", prod[i].name,prod[i].price);
};
int main(){
struct product myproduct;
printf("Enter product name & price.\n");
for(int i=0;i<2;i++)
scanf("%s%f",&myproduct.name,&myproduct.price);
production(myproduct);
}
*/
#include<stdio.h>
struct product{
char name[10];
float price;
};
int production(struct product prod){
printf("\nProduct name: %s\nProduct price: %.2f", prod.name,prod.price);
};
int main(){
struct product myproduct;
printf("Enter product name & price.\n");
scanf("%s%f",&myproduct.name,&myproduct.price);
production(myproduct);
}



