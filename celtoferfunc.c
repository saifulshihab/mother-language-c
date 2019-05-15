#include<stdio.h>
float CelToFer(float c);
float FerToCel(float c);
int main(){
float val;
scanf("%f", &val);
float result=CelToFer(val);
printf("Celcius to ferenhieght :%.2f\n", result);

float val2;
scanf("%f", &val2);
result=FerToCel(val2);
printf("Ferenhight to Celcius :%.2f", result);
}
float CelToFer(float c){
float fer=(c*9)/5+32;
return fer;
}
float FerToCel(float c){
float cel=((c-32)*9)/32;
return cel;
}


