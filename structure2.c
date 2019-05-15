#include<stdio.h>
int main(){
  struct student{
      char name[6];
      float cpro;
      float req;
      float math;
      float eng;
  };
  struct student st[3];
  int i;
  for(i=0;i<3;i++)
  {
    printf("\ninput for st %d:\n",i);
    scanf("%s",st[i].name);
    scanf("%f",&st[i].cpro);
     scanf("%f",&st[i].req);
     scanf("%f",&st[i].math);
     scanf("%f",&st[i].eng);
  }
   float stavg=0.0;
  printf("student wise avg: \n");
  for(i=0;i<3;i++)
  {
    stavg=(st[i].cpro+st[i].req+st[i].math+st[i].eng)/4;
    printf("st[%d] avg %.2f\n",i,stavg);
  }

  float cprsum=0.0;
  float reqsum=0.0;
  printf("sub wise avg: \n");
  for(i=0;i<3;i++)
  {
    cprsum+=st[i].cpro;
    reqsum+=st[i].req;
  }
  float cproavg=cprsum/3;
  float reqavg=reqsum/3;
  printf("\navg of cpro %.2f\n",cproavg);
  printf("avg of req %.2f",reqavg);
}
