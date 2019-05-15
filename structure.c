#include<stdio.h>
   int main(){
               struct student{
            char name[8];
             float cgpa;
           int semester;
                 };
         struct student st[5];
         printf("Enter 5 student number\n");
          int i;
          for(i=0;i<5;i++){
           printf("\nInput for st %d\n", i+1);
           scanf("%s",st[i].name);
             scanf("%f", &st[i].cgpa);
               scanf("%d", &st[i].semester);
           }
            for(i=0;i<5;i++){
               printf("\nOutput for st %d\n", i+1);
               printf("Student name: %s\n", st[i].name);
              printf("Student CGPA: %.2f\n", st[i].cgpa);
                 printf("Student semester: %d\n", st[i].semester);
        }



}

