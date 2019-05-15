
#include<stdio.h>
int main(){
struct university{
char versity_name[20];
int numof_dept;
};
struct department{
char dep_name[20];
int credit;
struct university u;
};
struct department d;
printf("University name\t\tNumber of dept\t\tDepartment name\t\tCredit\n");
scanf("%s%d%s%d",&d.u.versity_name,&d.u.numof_dept,&d.dep_name,&d.credit);
printf("University name: %s\nNumber of dept: %d\nDepartment name: %s\nCredit: %d\n",d.u.versity_name,d.u.numof_dept,d.dep_name,d.credit);
return 0;
}
/*
#include<stdio.h>
int i;
int main(){
struct university{
char versity_name[20];
int numof_dept;
};
struct department{
char dep_name[20];
int credit;
struct university u[3];
};
struct department d[3];
printf("University name\t\tNumber of dept\t\tDepartment name\t\tCredit\n");
for(i=0;i<3;i++)
scanf("%s %d %s %d",&d[i].u[i].versity_name,&d[i].u[i].numof_dept,&d[i].dep_name,&d[i].credit);
for(i=0;i<3;i++)
printf("\nUniversity name: %s\nNumber of dept: %d\nDepartment name: %s\nCredit: %d\n",d[i].u[i].versity_name,d[i].u[i].numof_dept,d[i].dep_name,d[i].credit);
}
*/
