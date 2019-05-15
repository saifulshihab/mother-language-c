#include<stdio.h>
int main()
{
 float classtest,attendence,finalexam,mark;
 printf("Enter Class test mark(out of 20):\n");
 scanf("%f", &classtest);
 if(classtest<=20){
 printf("Enter Attendence mark(0ut of 10):\n");
 scanf("%f", &attendence);
 if(attendence<=10){
 printf("Enter Final exam mark(out of 70):\n");
 scanf("%f", &finalexam);
 if(finalexam<=70){
 mark=(classtest+attendence+finalexam);
 printf("Total mark= %.2f\n", mark);
 if(mark<50)
    printf("F");
 else if(mark>=50 && mark<55)
    printf("D");
 else if(mark>=55 && mark<60)
    printf("C");
 else if(mark>=60 && mark<65)
    printf("B");
 else if(mark>=65 && mark<70)
    printf("B+");
 else if(mark>=70 && mark<75)
    printf("A-");
 else if(mark>=75 && mark<80)
    printf("A");
 else
        printf("A+");
  return 0;
 }}}
 if(classtest>20)
    printf("       'Class test mark' is invalid\n");
 else if(attendence>10)
    printf("       'Attendence mark' is invalid\n");
 else
    printf("       'Final exam mark' is invalid");

}
