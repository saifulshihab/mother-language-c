#include<stdio.h>
float CelToFer(float c);
float FerToCel(float f);

int main(){
float val;
scanf("%f", &val);
int x;
scanf("%d", &x);
switch(x){
case 1:
   float result=CelToFer(val);
   printf("Celcius to ferenhieght :%.2f\n", result);
break;
case 2:
   printf("Ferenhight to Celcius :%.2f\n", result);
}
}
float CelToFer(float c){
float fer=(c*9)/5+32;
return fer;
}
float FerToCel(float f){
float cel=((f-32)*9)/32;
return cel;
}


