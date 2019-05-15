#include<stdio.h>
struct Year{
int year;
};
struct Month{
int month;
struct Year Y;
};
struct Day{
int day;
struct Month M;
}D;
int display(struct Year y, struct Month m, struct Day d){
printf("\nYour Age: %d Year %d Month %d Day",2017-d.m.y.year,10-d.m.month,6-d.day);
};
int main(){
struct Year yr;
struct Month mn;
struct Day dy;
printf("Enter your Birthday(Y-M-D): ");
scanf("%d %d %d", &dy.mn.yr.year,&dy.mn.month,&dy.day);
return 0;
}
