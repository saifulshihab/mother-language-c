#include<stdio.h>

#include<conio.h>

#include<stdlib.h>

#include<string.h>

#include<windows.h>
///////////////////////////////////////////////////////////////////  Main Function ////////////////////////////////////////////////////////////////////////

main(){
headline();
display_1();
}


headline(){
printf("\n______________________________________________________________________________________________________________________________________________________");
printf("\n\t\t\t\t\t\t\t    Vehicles Reservation System\n");
printf("______________________________________________________________________________________________________________________________________________________\n");
}
admin(){
    int operation;
  printf("\n\n\t\t\t\t\t\t       ____________________________________");
  printf("\n\t\t\t\t\t\t      |                                    |\n");
  printf("\t\t\t\t\t\t      |           1. Admin Portal          |\n");
  printf("\t\t\t\t\t\t      |____________________________________|");
}
user(){
printf("\n\n\t\t\t\t\t\t       ____________________________________");
printf("\n\t\t\t\t\t\t      |                                    |\n");
printf("\t\t\t\t\t\t      |           2. User Portal           |\n");
printf("\t\t\t\t\t\t      |____________________________________|\n");
}
exit1(){
printf("\n\n\t\t\t\t\t\t       ____________________________________");
printf("\n\t\t\t\t\t\t      |                                    |\n");
printf("\t\t\t\t\t\t      |           0. Exit                  |\n");
printf("\t\t\t\t\t\t      |____________________________________|\n");
}
display_1()
{
    int operation;
   admin();
   user();
   exit1();
  printf("\nSelect One Which You Want: ");
  scanf("%d",&operation);
  switch(operation){
  case 1:
      system("CLS");
      headline();
      admin();
      display_2_Admin();
    break;
  case 2:
      system("CLS");
      headline();
      user();
      display_2_User();
      break;
  case 0:
      system("CLS");
    headline();
    printf("\n\nSystem Closed!\n\n\n\n");
    exit(1);
  default:
      system("CLS");
      headline();
    MessageBoxW(NULL,L"    Wrong Choice!!\n\tTry again .. ...",L"Error!",MB_OK);
    display_1();
}
}
display_2_Admin(){
    int operation;
printf("\n\n\n\n\t\t\t\t\t\t\t\t1. Registration\n\t\t\t\t\t\t\t\t2. Log in\n\t\t\t\t\t\t\t\t0. Back");
printf("\n\nSelect One Which You Want: ");
scanf("%d",&operation);
switch(operation){
case 1:
    system("CLS");
    headline();
    admin();
    a_reg();
   break;
case 2:
    system("CLS");
    headline();
    admin();
    a_log();
    break;
case 0:
    system("CLS");
    headline();
    display_1();
    break;
default:
    system("CLS");
    headline();
    admin();
    MessageBoxW(NULL,L"    Wrong Choice!!\n\tTry again .. ...",L"Error!",MB_OK);
    display_2_Admin();

}
}
display_2_User(){
    int operation;
printf("\n\n\n\t\t\t\t\t\t\t1. About Us\n\t\t\t\t\t\t\t2. Registration\n\t\t\t\t\t\t\t3. Inquiry (System Features)\n\t\t\t\t\t\t\t4. Reservation\n\t\t\t\t\t\t\t5. Exit\n\t\t\t\t\t\t\t0. Back");
printf("\n\nSelect One Which You Want: ");
scanf("%d",&operation);
switch(operation){
case 2:
    system("CLS");
    headline();
    user();
    registration();
    break;
case 3:
        system("CLS");
    headline();
    user();
    inquiry();
    break;
case 4:
        system("CLS");
    headline();
    user();
    reservation();
    break;

case 5:
    system("cls");
    headline();
    user();
    printf("\n\n\nSystem Closed!\n\n\n");
    exit(1);
    break;
case 0:
    system("CLS");
    headline();
    display_1();
    break;
case 1:
    system("CLS");
    headline();
    user();
    about();
    break;
default:
    system("CLS");
    headline();
    user();
    MessageBoxW(NULL,L"    Wrong Choice!!\n\tTry again .. ...",L"Error!",MB_OK);
     display_2_User();

}
}



about(){
    int n;
printf("\n\n      ' Vehicles Reservation System'is a online based system that provides the transportation facility to the customer based on their requirements.\n\nThis system provides different types of Cars (Luxury, SUV)  or Buses  for better travelling. \n");
printf("\n\n\nPress 0 to go back- ");
scanf("%d",&n);
if(n==0){
    system("CLS");
    headline();
    user();
    display_2_User();
}
else{
        system("CLS");
headline();
user();
    MessageBoxW(NULL,L"You have to press only 0. Try again .. ...",L"Error!",MB_OK);
    about();
}
}
////////////////////////////////////////////////////////////   " User Registration "   /////////////////////////////////////////////////////////////////////
struct reg{
char name[20],email[20],phn[20];
char pass[20];
}r;
FILE *regist;

registration(){
    int n;
    printf("\n\n\n\t\t\t\t\t\t\tRegistration Form");
    regist=fopen("Project_File\\Registration Form\\registration.txt","a");
    if(regist==NULL){
        printf("Could not find the file!\n");
        exit(1);
    }
    printf("\n\n\t\t\t\t\t\t\tEnter Your Name    : ");
    scanf("%s",&r.name);
    printf("\t\t\t\t\t\t\tEmail              : ");
    scanf("%s",&r.email);
    printf("\t\t\t\t\t\t\tPassword           : ");
    scanf("%s",&r.pass);
   // user_password();
    printf("\n\t\t\t\t\t\t\tPhone Number       : ");
    scanf("%s",&r.phn);
    fwrite(&r,sizeof(r),1,regist);
    fclose(regist);
    printf("\n\t\t\t\t\t\t\tRegistration Complete!\n");
    printf("\n\nPress 0 to Back Main Menu.\n");
    scanf("%d",&n);
    switch(n){
case 0:
    system("CLS");
     headline();
     user();
    display_2_User();
    break;
default:
    MessageBoxW(NULL,L"You have to press only 0. Try again .. ...",L"Error!",MB_OK);
    }
}
/*FILE *pas;

user_password(){
        const int maxpassln=15;
    char pass[maxpassln+1];
    int charpos=0;

char p[20];
pas=fopen("Project_File//UserP//.txt","a");
if(pas == NULL){
    printf("File does not exist.\n");
    exit(1);
}
printf("\t\t\t\t\t\t\tPassword: ");
     while(1){
   char p=getch();
   if(p == 13){
    break;
   }
   else if(p == 8){
    if(charpos>0){
        charpos--;
        pass[charpos]='\0';
        printf("\b \b");
    }
   }  else if(p==32 || p==9){
   continue;
   }
   else{
    if(charpos<maxpassln){
        pass[charpos]==p;
        charpos++;
        printf("*");
    }
    else{
        printf("\nYour fffgr");
        break;
    }
   }
 }
 fprintf(pas,"%s",p);
 fclose(pas);
}
/*FILE *pas;

user_password_1(){
        const int maxpassln=15;
    char pass[maxpassln+1];
    int charpos=0;
    int up_1;
pas=fopen("Project_File//UserP//.dat","r+");
printf("Password: ");
     while(1){
   up_1=getch();
   if(up_1 == 13){
    break;
   }
   else if(up_1 == 8){
    if(charpos>0){
        charpos--;
        pass[charpos]='\0';
        printf("\b \b");
    }
   }  else if(up_1==32 || up_1==9){
   continue;
   }
   else{
    if(charpos<maxpassln){
        pass[charpos]==up_1;
        charpos++;
        printf("*");
    }
    else{
        printf("\nYour fffgr");
        break;
    }
   }
 }
 fclose(pas);
}*/
////////////////////////////////////////////////////    Features 2:    " Inquiry "   /////////////////////////////////////////////////////////////////////


inquiry(){
    int operation;
      printf("\n\n\t\t\t\t\t\t\tInquiry\n");
    printf("\n\t\t\t\t\t\t\t1. Available Routes\n\t\t\t\t\t\t\t2. Vehicles Information\n\t\t\t\t\t\t\t3. Driver Information\n\t\t\t\t\t\t\t4. Payment Method\n\t\t\t\t\t\t\t5. Rent (Buses ticket price & Car hire charge)\n\t\t\t\t\t\t\t0. Back");
    printf("\n\nSelect One Which You Want: ");
    scanf("%d",&operation);
    switch(operation){
    case 0:
        system("CLS");
    headline();
    user();
    display_2_User();
    break;
case 1:
    system("CLS");
    headline();
    user();
   printf("\n\t\t\t\t\t\t\tAvailable Routes\n");
   printf("\n");
   printf("\n");
   route_1();
   break;
case 2:
    system("CLS");
    headline();
    user();
    printf("\n\t\t\t\t\t\t\tVehicles Information\n");
    printf("\n\n\t\t\t\t\t\t\tVehicles Type:\n");
    printf("\n\t\t\t\t\t\t\t1. Car\n\t\t\t\t\t\t\t2. Bus\n\t\t\t\t\t\t\t0. Back\n");
    printf("\n\nSelect One Which You Want: ");
    scanf("%d",&operation);
    switch(operation){
case 0:
    system("CLS");
    headline();
    user();
    inquiry();
    break;
case 1:
    system("CLS");
    headline();
    user();
    printf("\n\t\t\t\t\t\t\tCar List\n");
    printf("\n\t\t\t\t\t\t\t1. Luxury Car\n\t\t\t\t\t\t\t2. SUV\n\t\t\t\t\t\t\t3. Microbus\n\t\t\t\t\t\t\t0. Back");
    printf("\n\nSelect One Which You Want: ");
    scanf("%d",&operation);
    switch(operation){
case 0:
    system("CLS");
    headline();
    user();
   vi();
    break;
case 1:
    system("CLS");
    headline();
    user();
    luxury_1();
    break;
case 2:
    system("CLS");
    headline();
    user();
    suv_1();
    break;
case 3:
    system("CLS");
    headline();
    user();
    microbus_1();
    break;
default:
    system("CLS");
    headline();
    user();
    MessageBoxW(NULL,L"    Wrong Choice!!\n\tTry again .. ...",L"Error!",MB_OK);
    inquiry();
    }
    break;
case 2:
    system("CLS");
    headline();
    user();
   bus_2();
break;
default:
    system("CLS");
    headline();
    user();
    MessageBoxW(NULL,L"    Wrong Choice!!\n\tTry again .. ...",L"Error!",MB_OK);
    inquiry();
}
break;
case 3:
    system("CLS");
    headline();
    user();
    driver_1();
      break;
case 4:
    system("CLS");
    headline();
    user();
    payment();
    break;
case 5:
    system("CLS");
    headline();
    user();
    rent();
break;
default:
    system("CLS");
    headline();
    user();
    MessageBoxW(NULL,L"    Wrong Choice!!\n\tTry again .. ...",L"Error!",MB_OK);
    inquiry();
}
}
vi(){
    int operation;
printf("\n\t\t\t\t\t\t\tVehicles Information\n");
    printf("\n\n\t\t\t\t\t\t\tVehicles Type:\n");
    printf("\n\t\t\t\t\t\t\t\t1. Car\n\t\t\t\t\t\t\t\t2. Bus\n\t\t\t\t\t\t\t\t0. Back\n");
    printf("\n\nSelect One Which You Want: ");
    scanf("%d",&operation);
    switch(operation){
case 0:
    system("CLS");
    headline();
    user();
    inquiry();
    break;
case 1:
    system("CLS");
    headline();
    user();
    printf("\n\t\t\t\t\t\t\t1. Car List\n");
    printf("\n\t\t\t\t\t\t\t\t1. Luxury Car\n\t\t\t\t\t\t\t\t2. SUV\n\t\t\t\t\t\t\t\t3. Microbus\n\t\t\t\t\t\t\t\t0. Back");
    printf("\n\nSelect One Which You Want: ");
        scanf("%d",&operation);
    switch(operation){
case 0:
    system("CLS");
    headline();
    user();
    vi();
    break;
case 1:
    system("CLS");
    headline();
    user();
    luxury_1();
    break;
case 2:
    system("CLS");
    headline();
    user();
    suv_1();
    break;
case 3:
    system("CLS");
    headline();
    user();
    microbus_1();
    break;
default:
    system("CLS");
    headline();
    user();
    MessageBoxW(NULL,L"    Wrong Choice!!\n\tTry again .. ...",L"Error!",MB_OK);
    vi();
    }
    break;
case 2:
    system("CLS");
    headline();
    user();
   bus_2();
   break;
default:
    system("CLS");
    headline();
    user();
    MessageBoxW(NULL,L"    Wrong Choice!!\n\tTry again .. ...",L"Error!",MB_OK);
    vi();
    }
}
cr(){
    int operation;
    printf("\n\t\t\t\t\t\t\t1. Car List\n");
    printf("\n\t\t\t\t\t\t\t1. Luxury Car\n\t\t\t\t\t\t\t2. SUV\n\t\t\t\t\t\t\t3. Microbus\n\t\t\t\t\t\t\t0. Back");
    printf("\n\n\t\t\t\t\t\tSelect One Which You Want: ");
        scanf("%d",&operation);
    switch(operation){
case 0:
    system("CLS");
    headline();
    user();
    vi();
    break;
case 1:
    system("CLS");
    headline();
    user();
    luxury_1();
    break;
case 2:
    system("CLS");
    headline();
    user();
    suv_1();
    break;
case 3:
    system("CLS");
    headline();
    user();
    microbus_1();
    break;
default:
    system("CLS");
    headline();
    user();
    MessageBoxW(NULL,L"    Wrong Choice!!\n\tTry again .. ...",L"Error!",MB_OK);
    cr();
    }
}
/////////////////////////////////////////////////////////////////   " Reservation "   ////////////////////////////////////////////////////////////////////

reservation(){
    int operation;
    FILE *regist;
    FILE *name;
    FILE *up;
    const int maxpassln=15;
    char log_email[20],pass[maxpassln+1];
    char up_1[20];
    int agree;
    int charpos=0;
    printf("You must have to Log in for booking any vehicles!\n");
    printf("\nDo you Registered to this system? ( 1 for 'YES' / 0 for 'NO')\n");
    scanf("%d",&agree);
    if(agree==1){
    printf("\n\n\t\t\t\t\t\t\tRESERVATION");
        regist=fopen("Project_File\\Registration Form\\registration.txt","r");
    printf("\n\n\t\t\t\t\t\t\tEmail         : ");
    scanf("%s",&log_email);
    printf("\t\t\t\t\t\t\tPassword      : ");
    scanf("%s",&up_1);
         /*while(1){
   up_1=getch();
   if(up_1 == 13){
    break;
   }
   else if(up_1 == 8){
    if(charpos>0){
        charpos--;
        pass[charpos]='\0';
        printf("\b \b");
    }
   }  else if(up_1==32 || up_1==9){
   continue;
   }
   else{
    if(charpos<maxpassln){
        pass[charpos]==up_1;
        charpos++;
        printf("*");
    }
    else{
        printf("\nYour fffgr");
        break;
    }
   }
 }*/

    // user_password_1();
    while(fread(&r,sizeof(r),1,regist)){

        if(strcmp(log_email,r.email)==0 && strcmp(up_1,r.pass)==0){
            system("CLS");
            printf("Congratulation, Successfully Log in!");
            headline();
            user();
                        name=fopen("Project_File//Name//.txt","w");
            if(name==NULL){
                printf("File does'nt exist.");
                exit(1);
            }
            fprintf(name,"%s",r.name);
            fclose(name);

            User_After_Login();
            break;
        }
            else{
                system("CLS");
                headline();
                user();
                printf("\n\nIncorrect Email or Password (or you are not registered to this system) !!  Try Again .. ....  ......\n\n");

            }
    }
    fclose(regist);
}
else{
    system("CLS");
    printf("Please Registration First-\n");
    headline();
    user();
    registration();

}
}
////////////////////////////////////////////////////////////////  Admin Registration/////////////////////////////////////////////////////////////////////////

struct adminnm{
char adnm[20];
char ap[20];
}a;
a_reg()
{
    FILE *adminnm;
    FILE *adminp;
    int n;
    printf("\n\n\t\t\t\t\t\t\tRegistration\n");
    adminnm=fopen("Project_File//Admin_reg//reg.txt","a");
    if(adminnm == NULL){
        printf("File doesn't Exist!\n");
      exit(1);
    }
    printf("\n\t\t\t\t\t\t\tEmail         : ");
    scanf("%s",&a.adnm);

    printf("\t\t\t\t\t\t\tPassword      : ");
    scanf("%s",&a.ap);

    fwrite(&a,sizeof(a),1,adminnm);
    fclose(adminnm);

    printf("\n\t\t\t\t\t\t\tRegistration Complete.\n");
    printf("\nPress 0 To Go Back- ");
    scanf("%d",&n);
    switch(n){
case 0:
    system("CLS");
    headline();
     admin();
     display_2_Admin();
    break;
default:
    system("CLS");
    headline();
    admin();
    printf("\nYou have to press only 0\n");
    exit(1);
    }
}
///////////////////////////////////////////////////////////////////  Admin Login  /////////////////////////////////////////////////////////////////////////
a_log()
{
    FILE *adminnm;
    FILE *adminp;
    char log_em[20],log_p[20];

   adminnm=fopen("Project_File//Admin_reg//reg.txt","r");
    printf("\n\n\t\t\t\t\t\t\tEmail         : ");
    scanf("%s",&log_em);
   printf("\t\t\t\t\t\t\tPassword      : ");
    scanf("%s",&log_p);

while(fread(&a,sizeof(a),1,adminnm)){
    if(strcmp(log_em,a.adnm)==0 && strcmp(log_p,a.ap)==0){
            system("CLS");
            printf("Successfully Log in.");
            headline();
            admin();
            printf("\n");
            admin_after_login();
            break;
        }
        else{
            system("CLS");
            headline();
            admin();
            printf("\n\nIncorrect Email or Password (or you are not registered to this system) !!  Try again.......\n\n\n");
        }

    }
    fclose(adminnm);
    fclose(adminp);
}
///////////////////////////////////////////////////////////////// Admin After Login  //////////////////////////////////////////////////////////////////////
admin_after_login()
{
    int operation;
    printf("\n\n\t\t\t\t\t\t\tAdding Project Information");
    printf("\n\n\t\t\t\t\t\t\t1. Available Routes\n\t\t\t\t\t\t\t2. Vehicles Information\n\t\t\t\t\t\t\t3. Driver Information\n\t\t\t\t\t\t\t4. Rent\n\t\t\t\t\t\t\t5. Booking History\n\t\t\t\t\t\t\t0. Log out");
  printf("\nSelect One Which You One: ");
  scanf("%d",&operation);
  switch(operation){
  case 0:
      system("CLS");
      headline();
      admin();
      display_2_Admin();
      break;
  case 1:
      system("CLS");
      headline();
      admin();
      route();
      break;
  case 2:
    system("CLS");
    headline();
    admin();
    printf("\n\n\t\t\t\t\t\t\tVehicle Type\n");
    printf("\n\t\t\t\t\t\t\t1. Car\n\t\t\t\t\t\t\t2. Bus\n");
    printf("Select One: ");
    scanf("%d",&operation);
    switch(operation){
case 1:
    system("CLS");
    headline();
    admin();
    car();
    break;
case 2:
    system("CLS");
    headline();
    admin();
    bus();
    break;
default:
    system("CLS");
    headline();
    admin();
    MessageBoxW(NULL,L"    Wrong Choice!!\n\tTry again .. ...",L"Error!",MB_OK);
    admin_after_login();
    }

  break;
case 3:
    system("CLS");
    headline();
    admin();
    printf("\nDriver Information-\n");
    driver();
    break;
case 4:
    system("CLS");
    headline();
    admin();
    rent_1();
    break;
case 5:
    system("CLS");
    headline();
    admin();
    //history();
    break;
default:
    system("CLS");
    headline();
    admin();
    MessageBoxW(NULL,L"    Wrong Choice!!\n\tTry again .. ...",L"Error!",MB_OK);
    admin_after_login();
  }

}
////////////////////////////////////////////////////////////////   Route     //////////////////////////////////////////////////////////////////////////////
struct rot{
char route_nm[20],route_no[50];
}rt;
route(){
FILE *route;
int operation;
route=fopen("Project_File//Available Routes//.txt","a");
if(route==NULL){
    printf("File does'nt exist!\n");
    exit(1);
}
printf("\n\n\n\t\t\t\t\t\t\tRoute Number: ");
scanf("%s",rt.route_no);
printf("\n\t\t\t\t\t\t\tEnter a Route Name: ");
scanf("%s",rt.route_nm);
fwrite(&rt,sizeof(rt),1,route);
fclose(route);
printf("\n\t\t\t\t\t\t\tInfo added.\n");
printf("Press 0 To Go Back- ");
scanf("%d",&operation);
if(operation==0){
    system("CLS");
    headline();
    admin();
    admin_after_login();
}
else
    printf("\nYou have to press only 0\n");

}
route_1(){
    FILE *route;
int operation;
route=fopen("Project_File//Available Routes//.txt","r");
if(route==NULL){
    printf("File does'nt exist!\n");
    exit(1);
}
while(fread(&rt,sizeof(rt),1,route))
    printf("\n\t\t\t\t\t\t\t%s. %s\n",rt.route_no,rt.route_nm );
fclose(route);
printf("\nPress 0 To Go Back- ");
scanf("%d",&operation);
if(operation==0){
    system("CLS");
    headline();
    user();
   inquiry();
}
else{
    system("CLS");
    headline();
    user();
    MessageBoxW(NULL,L"You have to press only 0. Try again .. ...",L"Error!",MB_OK);
    route_1();
}
}
/////////////////////////////////////////////////////////   Driver   /////////////////////////////////////////////////////////////
struct dri{
char dr_id[20],dr_name[20],dr_phn[20];
char dr_age[100];
}d;

driver(){
    int n;
    FILE *drive;
        drive=fopen("Project_File\\Driver Information\\.txt","a");
          if(drive==NULL){
        printf("Could not find the file!\n");
        exit(1);
    }
      printf("\nDriver ID: ");
      scanf("%s",&d.dr_id);
      getc(stdin);
      printf("\nDriver Name: ");
      scanf("%[^\n]s",&d.dr_name);
      printf("Driver Phone Number: ");
      scanf("%s",&d.dr_phn);
      printf("Driver Age: ");
      scanf("%s",&d.dr_age);
      fwrite(&d,sizeof(d),1,drive);
      fclose(drive);
      printf("\n\nPress 0 To Go Back- ");
      scanf("%d",&n);
      if(n==0){
        system("CLS");
        headline();
        admin();
        admin_after_login();
      }
      else
        printf("You Have To Press Only 0\n");
      exit(1);
      getc(stdin);

}
driver_1(){
 int n;
    FILE *drive;
    drive=fopen("Project_File\\Driver Information\\.txt","r");
    if(drive==NULL){
    printf("Could not find the file!\n");
        exit(1);
        }
    while(fread(&d,sizeof(d),1,drive))
        printf("\n\n\t\t\t\t\t\t\tDriver ID           : %s\n\t\t\t\t\t\t\tDriver Name         : %s\n\t\t\t\t\t\t\tDriver Phone Number : %s\n\t\t\t\t\t\t\tDriver Age          : %s\n",d.dr_id,d.dr_name,d.dr_phn,d.dr_age);
    fclose(drive);
    printf("\nPress 0 To Go Back - ");
    scanf("%d",&n);
          if(n==0){
        system("CLS");
        headline();
       user();
       inquiry();
      }
      else
        system("CLS");
      headline();
      user();
    MessageBoxW(NULL,L"You have to press only 0. Try again .. ...",L"Error!",MB_OK);
    driver_1();

}
////////////////////////////////////////////////////////  Payment Method  ////////////////////////////////////////////////////////////////////////////
payment(){
int n;
printf("\n\n\t\t\t\t\t\tYou can pay your bill to the following system:-\n\n");
printf("\n\t\t\t\t\t\t\t1. Credit or Debit Card\n\t\t\t\t\t\t\t2. bkash\n");
printf("\nPress 0 to go back- ");
scanf("%d",&n);
if(n==0){
    system("CLS");
    headline();
    user();
    inquiry();
}
else{
        system("CLS");
      headline();
      user();
    MessageBoxW(NULL,L"You have to press only 0. Try again .. ...",L"Error!",MB_OK);
payment();
}
}
//////////////////////////////////////////////////  Rent  ////////////////////////////////////////////////////////////////////
rent(){
    int n,operation;
    printf("\n\n\t\t\t\t\t\t\tVehicles Type:\n");
    printf("\n\t\t\t\t\t\t\t1. Car\n\t\t\t\t\t\t\t2. Bus\n\t\t\t\t\t\t\t0. Back\n");
    printf("\n\nSelect One Which You Want: ");
    scanf("%d",&operation);
    switch(operation){
case 0:
    system("CLS");
    headline();
    user();
    inquiry();
    break;
case 1:
    system("CLS");
    headline();
    user();
    printf("\n\t\t\t\t\t\t\tCar List\n");
    printf("\n\t\t\t\t\t\t\t1. Luxury Car\n\t\t\t\t\t\t\t2. SUV\n\t\t\t\t\t\t\t3. Microbus\n\t\t\t\t\t\t\t0. Back");
    printf("\n\nSelect One Which You Want: ");
    scanf("%d",&operation);
    switch(operation){
case 0:
    system("CLS");
    headline();
    user();
    bn();
    break;
case 1:
    system("CLS");
    headline();
    user();
    luxury_rent_1();
    break;
case 2:
    system("CLS");
    headline();
    user();
    suv_rent_1();
    break;
case 3:
    system("CLS");
    headline();
    user();
    micro_rent_1();
    break;
default:
    system("CLS");
    headline();
    user();
    MessageBoxW(NULL,L"    Wrong Choice!!\n\tTry again .. ...",L"Error!",MB_OK);
    rent();
    }
    break;
case 2:
    system("CLS");
    headline();
    user();
  bus_rent_1();
break;
default:
    system("CLS");
    headline();
    user();
    MessageBoxW(NULL,L"    Wrong Choice!!\n\tTry again .. ...",L"Error!",MB_OK);
    rent();
}
}
bn(){
    int operation;
    printf("\n\n\t\t\t\t\t\t\tVehicles Type:\n");
    printf("\n\t\t\t\t\t\t\t1. Car\n\t\t\t\t\t\t\t2. Bus\n\t\t\t\t\t\t\t0. Back\n");
    printf("\n\nSelect One Which You Want: ");
    scanf("%d",&operation);
    switch(operation){
case 0:
    system("CLS");
    headline();
    user();
    inquiry();
    break;
case 1:
    system("CLS");
    headline();
    user();
    back();
    break;
case 2:
    system("CLS");
    headline();
    user();
    bus_rent_1();
    break;
default:
    system("CLS");
    headline();
    user();
    MessageBoxW(NULL,L"    Wrong Choice!!\n\tTry again .. ...",L"Error!",MB_OK);
    bn();

}
}
back(){
    int operation;
    printf("\n\t\t\t\t\t\t\tCar List\n");
    printf("\n\t\t\t\t\t\t\t1. Luxury Car\n\t\t\t\t\t\t\t2. SUV\n\t\t\t\t\t\t\t3. Microbus\n\t\t\t\t\t\t\t0. Back");
    printf("\n\nSelect One Which You Want: ");
    scanf("%d",&operation);
    switch(operation){
case 0:
    system("CLS");
    headline();
    user();
    bn();
    break;
case 1:
    system("CLS");
    headline();
    user();
    luxury_rent_1();
    break;
case 2:
    system("CLS");
    headline();
    user();
    suv_rent_1();
    break;
case 3:
    system("CLS");
    headline();
    user();
    micro_rent_1();
    break;
default:
    system("CLS");
    headline();
    user();
    MessageBoxW(NULL,L"    Wrong Choice!!\n\tTry again .. ...",L"Error!",MB_OK);
    back();
}
}





rent_1(){
    int n,operation;
    printf("\n\n\t\t\t\t\t\t\tVehicles Type:\n");
    printf("\n\t\t\t\t\t\t\t1. Car\n\t\t\t\t\t\t\t2. Bus\n\t\t\t\t\t\t\t0. Back\n");
    printf("\n\nSelect One Which You Want: ");
    scanf("%d",&operation);
    switch(operation){
case 0:
    system("CLS");
    headline();
    admin();
    admin_after_login();
    break;
case 1:
    system("CLS");
    headline();
    admin();
    printf("\n\t\t\t\t\t\t\tCar List\n");
    printf("\n\t\t\t\t\t\t\t1. Luxury Car\n\t\t\t\t\t\t\t2. SUV\n\t\t\t\t\t\t\t3. Microbus\n\t\t\t\t\t\t\t0. Back");
    printf("\n\nSelect One Which You Want: ");
    scanf("%d",&operation);
    switch(operation){
case 0:
    system("CLS");
    headline();
    admin();
    admin_after_login();
    break;
case 1:
    system("CLS");
    headline();
    admin();
    luxury_rent();
    break;
case 2:
    system("CLS");
    headline();
   admin();
    suv_rent();
    break;
case 3:
    system("CLS");
    headline();
   admin();
    micro_rent();
    break;
default:
    system("CLS");
    headline();
    admin();
    MessageBoxW(NULL,L"    Wrong Choice!!\n\tTry again .. ...",L"Error!",MB_OK);
    rent_1();
    }
    break;
case 2:
    system("CLS");
    headline();
    admin();
    bus_rent();
break;
default:
    system("CLS");
    headline();
    admin();
    MessageBoxW(NULL,L"    Wrong Choice!!\n\tTry again .. ...",L"Error!",MB_OK);
    rent_1();
}
}
    struct bs{
char rt_id[20];
char rt_nm[20];
double rent;
}rn;

bus_rent(){
FILE *rent;
int n;
rent=fopen("Project_File//Bus_rent//.txt","a");
if(rent == NULL){
    printf("File does not exist");
    exit(1);
     }
    printf("\n\n\n\t\t\t\t\t\t\tEnter Route ID   : ");
    scanf("%s",&rn.rt_id);
    printf("\t\t\t\t\t\t\tEnter Route Name : ");
    scanf("%s",&rn.rt_nm);
    printf("\t\t\t\t\t\t\tRent             : ");
    scanf("%lf",&rn.rent);
fwrite(&rn,sizeof(rn),1,rent);
fclose(rent);

printf("Press 0 to go back- ");
scanf("%d",&n);
if(n==0){
    system("CLS");
    headline();
    admin();
    admin_after_login();
}
else
{
    printf("You have to press only 0.");
    exit(1);
}
}

bus_rent_1(){
    struct bs{
char rt_id[20];
char rt_nm[20];
double rent;
}rn;

    printf("\n\t\t\t\t\t\t\tBUS RENT");
FILE *rent;
int n;
rent=fopen("Project_File//Bus_rent//.txt","r");
if(rent == NULL){
    printf("File does not exist");
    exit(1);
}
while(fread(&rn,sizeof(rn),1,rent))
printf("\n\n\t\t\t\t\t\t\t%s. %s\n\t\t\t\t\t\t\t   Rent   : %.0lf",rn.rt_id,rn.rt_nm,rn.rent);
fclose(rent);
printf("\nPress 0 to go back- ");
scanf("%d",&n);
if(n==0){
    system("CLS");
    headline();
    user();
    bn();
}
else
{
    system("CLS");
    headline();
    user();
    MessageBoxW(NULL,L"You have to press only 0. Try again .. ...",L"Error!",MB_OK);
    bus_rent_1();

}

}
struct lux{
char lu_id[20],lu_nm[20],lu_rent[20];
}lo;

luxury_rent(){
FILE *rent;
int n;
rent=fopen("Project_File//Luxury_rent//.txt","a");
if(rent == NULL){
    printf("File does not exist");
    exit(1);
     }
    printf("\n\n\n\t\t\t\t\t\t\tEnter Route ID   : ");
    scanf("%s",&lo.lu_id);
    printf("\t\t\t\t\t\t\tEnter Route Name : ");
    scanf("%s",&lo.lu_nm);
        getc(stdin);
    printf("\t\t\t\t\t\t\tRent             : ");
    scanf("%[^\n]s",&lo.lu_rent);
fwrite(&lo,sizeof(lo),1,rent);
getc(stdin);
fclose(rent);

printf("Press 0 to go back- ");
scanf("%d",&n);
if(n==0){
    system("CLS");
    headline();
    admin();
    admin_after_login();
}
else
{
    printf("You have to press only 0.");
    exit(1);
}
}

luxury_rent_1(){
        printf("\n\t\t\t\t\t\t\tLUXURY CAR RENT");
FILE *rent;
int n;
rent=fopen("Project_File//Luxury_rent//.txt","r");
if(rent == NULL){
    printf("File does not exist");
    exit(1);
}
while(fread(&lo,sizeof(lo),1,rent))
printf("\n\n\t\t\t\t\t\t\t%s. %s\n\t\t\t\t\t\t\t   Rent   : %s",lo.lu_id,lo.lu_nm,lo.lu_rent);
fclose(rent);
printf("\nPress 0 to go back- ");
scanf("%d",&n);
if(n==0){
    system("CLS");
    headline();
    user();
    back();
}
else
{
    system("CLS");
    headline();
    user();
MessageBoxW(NULL,L"You have to press only 0. Try again .. ...",L"Error!",MB_OK);
luxury_rent_1();

;
}

}


struct sd{
char sv_id[20],sv_nm[20],sv_rent[20];
}so;

suv_rent(){
FILE *rent;
int n;
rent=fopen("Project_File//Suv_rent//.txt","a");
if(rent == NULL){
    printf("File does not exist");
    exit(1);
     }
    printf("\n\n\n\t\t\t\t\t\t\tEnter Route ID   : ");
    scanf("%s",&so.sv_id);
    printf("\t\t\t\t\t\t\tEnter Route Name : ");
    scanf("%s",&so.sv_nm);
    getc(stdin);
    printf("\t\t\t\t\t\t\tRent             : ");
    scanf("%[^\n]s",&so.sv_rent);
fwrite(&so,sizeof(so),1,rent);
getc(stdin);
fclose(rent);

printf("Press 0 to go back- ");
scanf("%d",&n);
if(n==0){
    system("CLS");
    headline();
    admin();
    admin_after_login();
}
else
{
    printf("You have to press only 0.");
    exit(1);
}
}

suv_rent_1(){
            printf("\n\t\t\t\t\t\t\tSUV CAR RENT");
FILE *rent;
int n;
rent=fopen("Project_File//Suv_rent//.txt","r");
if(rent == NULL){
    printf("File does not exist");
    exit(1);
}
while(fread(&so,sizeof(so),1,rent))
printf("\n\n\t\t\t\t\t\t\t%s. %s\n\t\t\t\t\t\t\t   Rent   : %s",so.sv_id,so.sv_nm,so.sv_rent);
fclose(rent);
printf("\nPress 0 to go back- ");
scanf("%d",&n);
if(n==0){
    system("CLS");
    headline();
    user();
    back();
}
else
{
    system("CLS");
    headline();
    user();
     MessageBoxW(NULL,L"You have to press only 0. Try again .. ...",L"Error!",MB_OK);
     suv_rent_1();

}

}

struct mic{
char mc_id[20],mc_nm[20],mc_rent[20];
}mi;

micro_rent(){
FILE *rent;
int n;
rent=fopen("Project_File//Micro_rent//.txt","a");
if(rent == NULL){
    printf("File does not exist");
    exit(1);
     }
    printf("\n\n\n\t\t\t\t\t\t\tEnter Route ID   : ");
    scanf("%s",&mi.mc_id);
    printf("\t\t\t\t\t\t\tEnter Route Name : ");
    scanf("%s",&mi.mc_nm);
    getc(stdin);
    printf("\t\t\t\t\t\t\tRent             : ");
    scanf("%[^\n]s",&mi.mc_rent);
fwrite(&mi,sizeof(mi),1,rent);
getc(stdin);
fclose(rent);

printf("Press 0 to go back- ");
scanf("%d",&n);
if(n==0){
    system("CLS");
    headline();
    admin();
    admin_after_login();
}
else
{
    printf("You have to press only 0.");
    exit(1);
}
}

micro_rent_1(){
    printf("\n\t\t\t\t\t\t\tMICROBUS RENT");
FILE *rent;
int n;
rent=fopen("Project_File//Micro_rent//.txt","r");
if(rent == NULL){
    printf("File does not exist");
    exit(1);
}
while(fread(&mi,sizeof(mi),1,rent))
printf("\n\n\t\t\t\t\t\t\t%s. %s\n\t\t\t\t\t\t\t   Rent   : %s",mi.mc_id,mi.mc_nm,mi.mc_rent);
fclose(rent);
printf("\nPress 0 to go back- ");
scanf("%d",&n);
if(n==0){
    system("CLS");
    headline();
    user();
    back();
}
else
{
    system("CLS");
    headline();
    user();
     MessageBoxW(NULL,L"You have to press only 0. Try again .. ...",L"Error!",MB_OK);
  micro_rent_1();

}

}




//////////////////////////////////////////////////  Vehicles ////////////////////////////////////////////////////////////////////
car(){
    int operation;
    printf("\n\n\n\t\t\t\t\t\t\tCar List\n");
    printf("\n\t\t\t\t\t\t\t1. Luxury Car\n\t\t\t\t\t\t\t2. SUV\n\t\t\t\t\t\t\t3. Microbus\n\t\t\t\t\t\t\t0. Back");
    printf("\n\nSelect One Which You Want: ");
    scanf("%d",&operation);
    if(operation==1){
        system("CLS");
        headline();
        admin();
        luxury();
    }
    else if(operation==2){
        system("CLS");
        headline();
        admin();
        suv();
    }
    else if(operation==3){
        system("CLS");
        headline();
        admin();
      microbus();
    }
    else if(operation==0){
        system("CLS");
        headline();
        admin();
        admin_after_login();
    }
    else
        system("CLS");
    headline();
    admin();
    MessageBoxW(NULL,L"    Wrong Choice!!\n\tTry again .. ...",L"Error!",MB_OK);
}

//struct bas{
//char bnm[20],sz[20],fitc[20];
//}b;
bus(){
    char bnm[20],sz[20],fitc[20];

int operation;
double avail,set;
FILE *bs;
FILE *bs_seat;
FILE *avail_1;
getc(stdin);
bs=fopen("Project_File//Bus//bus.txt","w");
if(bs==NULL){
    printf("File doesn't exist!\n");
    exit(1);
}
printf("\n\n\t\t\t\t\t\t\tName                         : ");
scanf("%s",bnm);
getc(stdin);
    printf("\t\t\t\t\t\t\tBus Size                     : ");
scanf("%[^\n]s",sz);
    printf("\t\t\t\t\t\t\tNumber of Seat               : ");
scanf("%lf",&set);
avail_1=fopen("Project_File//avail_1//.txt","w");
if(avail_1==NULL){
    printf("Error!\n");
    exit(1);
}
fprintf(avail_1,"%.0lf",set);
fclose(avail_1);
getc(stdin);
printf("\t\t\t\t\t\t\tBus Fitness Condition        : ");
scanf("%[^\n]s",fitc);
getc(stdin);
fprintf(bs,"%s   %s   %.0lf   %s",bnm,sz,set,fitc);
//fwrite(&b,sizeof(b),1,bs);
//fprintf(bs,"%lf",set);

fclose(bs);
bs_seat=fopen("Project_File//bus_seat//v.txt","w");
if(bs_seat==NULL){
    printf("Sorry, a file does'nt exist !\n");
    exit(1);
}
avail=set;
fprintf(bs_seat,"%.0lf",avail);
fclose(bs_seat);
printf("Press 0 To Go Back- ");
scanf("%d",&operation);
if(operation==0){
    system("CLS");
    headline();
    admin();
    admin_after_login();
}
else
    printf("You Have To Press Only 0\n");
exit(1);
}

bus_2(){
    double avail,set;
int operation;
FILE *bs;
FILE *bs_seat;
FILE *avail_1;
char bnm[20],sz[20],fitc[20];
bs=fopen("Project_File//Bus//bus.txt","r");
if(bs==NULL){

    printf("file\n");
    exit(1);
}
printf("\n\n\t\t\t\t\t\t\tBus Information\n");
bs_seat=fopen("Project_File//Bus_seat//v.txt","r");
if(bs_seat==NULL){
    printf("Sorry, a file does'nt exist !\n");
    exit(1);
}
fscanf(bs_seat,"%lf",&avail);
if(avail<=0){
    avail=0;
}
fclose(bs_seat);
avail_1=fopen("Project_File//Avail_1//.txt","r");
if(avail_1==NULL){
    printf("Error!\n");
    exit(1);
}
fscanf(avail_1,"%lf",&set);
fclose(avail_1);

fscanf(bs,"%s",bnm);
fscanf(bs,"%s",sz);
fscanf(bs,"%lf",&set);
getc(stdin);
fscanf(bs,"%s",fitc);

printf("\n\n\t\t\t\t\t\t\tName               : %s\n\t\t\t\t\t\t\tBus Size           : %s\n\t\t\t\t\t\t\tNumber of Seat     : %.0lf\n\t\t\t\t\t\t\tFitness Condition  : %s\n\n\t\t\t\t\t\t\tAvailable Seat     : %.0lf\n",bnm,sz,set,fitc,avail);
fclose(bs);
printf("Press 0 To Go Back- ");
scanf("%d",&operation);
if(operation==0){
    system("CLS");
    headline();
    user();
    vi();
}
else
    system("CLS");
headline();
user();
 MessageBoxW(NULL,L"You have to press only 0. Try again .. ...",L"Error!",MB_OK);
bus_2();

}


struct luxur{
char ln[20],s[20],seat[20],fc[20];
}lu;

luxury(){
int operation;
FILE *luxury;
printf("\n\n\n\t\t\t\t\t\t\tLuxury Car");
luxury=fopen("Project_File//Luxury//.txt","w");
printf("\n\n\t\t\t\t\t\t\tCar Name            : ");
scanf("%s",&lu.ln);
printf("\n\n\t\t\t\t\t\t\tSize               : ");
scanf("%s",&lu.s);
printf("\t\t\t\t\t\t\tSeat               : ");
scanf("%s",&lu.seat);
printf("\t\t\t\t\t\t\tFitness Condition   : ");
scanf("%s",&lu.fc);
fwrite(&lu,sizeof(lu),1,luxury);
fclose(luxury);
printf("\nPress 0 To Go Back- ");
scanf("%d",&operation);
if(operation==0){
    system("CLS");
headline();
admin();
admin_after_login();
}
else
printf("You Have To Press Only 0\n");
exit(1);

}
luxury_1(){
    struct luxur{
char ln[20],s[20],seat[20],fc[20];
}lu;

int operation;
FILE *luxury;
luxury=fopen("Project_File//Luxury//.txt","r");
printf("\n\n\t\t\t\t\t\t\tLuxury Car\n");
while(fread(&lu,sizeof(lu),1,luxury))
printf("\n\n\t\t\t\t\t\t\tCar Name              : %s\n\t\t\t\t\t\t\tCar Size              : %s\n\t\t\t\t\t\t\tNumber of Seat        : %s\n\t\t\t\t\t\t\tFitness Condition     : %s\n\n",lu.ln,lu.s,lu.seat,lu.fc);
fclose(luxury);
printf("Press 0 To Go Back- ");
scanf("%d",&operation);
if(operation==0){
    system("CLS");
headline();
user();
cr();
}
else
    system("CLS");
headline();
user();
 MessageBoxW(NULL,L"You have to press only 0. Try again .. ...",L"Error!",MB_OK);
luxury_1();
}

struct suvs{
char sn[20],s[20],seat[20],fc[20];
}su;

suv(){
int operation;
FILE *suv;
printf("\n\n\n\t\t\t\t\t\t\tSUV");
suv=fopen("Project_File//Suv//.txt","w");
printf("\n\n\t\t\t\t\t\t\tCar Name            : ");
scanf("%s",&su.sn);
printf("\n\n\t\t\t\t\t\t\tSize                : ");
scanf("%s",&su.s);
printf("\t\t\t\t\t\t\tSeat                : ");
scanf("%s",&su.seat);
printf("\t\t\t\t\t\t\tFitness Condition   : ");
scanf("%s",&su.fc);
fwrite(&su,sizeof(su),1,suv);
fclose(suv);
printf("\nPress 0 To Go Back- ");
scanf("%d",&operation);
if(operation==0){
system("CLS");
headline();
admin();
admin_after_login();
}
else
printf("You Have To Press Only 0\n");
exit(1);

}
suv_1(){
struct suvs{
char sn[20],s[20],seat[20],fc[20];
}su;
int operation;
FILE *suv;
suv=fopen("Project_File//Suv//.txt","r");
printf("\n\n\t\t\t\t\t\t\tSUV");
while(fread(&su,sizeof(su),1,suv))
printf("\n\n\t\t\t\t\t\t\tCar Name             : %s\n\t\t\t\t\t\t\tCar Size             : %s\n\t\t\t\t\t\t\tNumber of Seat       : %s\n\t\t\t\t\t\t\tFitness Condition    : %s\n",su.sn,su.s,su.seat,su.fc);
fclose(suv);
printf("Press 0 To Go Back- ");
scanf("%d",&operation);
if(operation==0){
system("CLS");
headline();
user();
cr();
}
else
    system("CLS");
headline();
user();
 MessageBoxW(NULL,L"You have to press only 0. Try again .. ...",L"Error!",MB_OK);
 suv_1();
}


struct mi{
char mn[20],s[20],seat[20],fc[20];
}mu;

microbus(){
int operation;
FILE *micro;
printf("\n\n\n\t\t\t\t\t\t\tMICROBUS");
micro=fopen("Project_File//Microbus//micro.txt","w");
if(micro==NULL){
    printf("File Does not exist\n");
exit(1);
}
printf("\n\n\t\t\t\t\t\t\tCar Name            : ");
scanf("%s",&mu.mn);
printf("\n\n\t\t\t\t\t\t\tSize               : ");
scanf("%s",&mu.s);
printf("\t\t\t\t\t\t\tSeat                : ");
scanf("%s",&mu.seat);
printf("\t\t\t\t\t\t\tFitness Condition   : ");
scanf("%s",&mu.fc);
fwrite(&mu,sizeof(mu),1,micro);
fclose(micro);
printf("\nPress 0 To Go Back- ");
scanf("%d",&operation);
if(operation==0){
system("CLS");
headline();
admin();
admin_after_login();
}
else
printf("\nYou Have To Press Only 0\n");
exit(1);
}

microbus_1(){
struct mi{
char mn[20],s[20],seat[20],fc[20];
}mu;
int operation;
FILE *micro;
micro=fopen("Project_File//Microbus//micro.txt","r");
if(micro==NULL){
    printf("File Does not exist\n");
exit(1);
}
printf("\n\n\t\t\t\t\t\t\tMICROBUS");
while(fread(&mu,sizeof(mu),1,micro))
 printf("\n\n\t\t\t\t\t\t\tCar Name            : %s\n\t\t\t\t\t\t\tCar Size            : %s\n\t\t\t\t\t\t\tNumber of Seat      : %s\n\t\t\t\t\t\t\tFitness Condition   : %s\n\n",mu.mn,mu.s,mu.seat,mu.fc);
fclose(micro);
printf("Press 0 To Go Back- ");
scanf("%d",&operation);
if(operation==0){
system("CLS");
headline();
user();
cr();
}
else
    system("CLS");
headline();
user();
microbus_1();
}

///////////////////////////////////////////////////////  User After Login  ////////////////////////////////////////////////////////////////////////////////////
struct hist{
char dat[20],rtr[20],vcr[20],drr[20],rnt[20];
}h;



User_After_Login(){

  struct dri{
char dr_id[20],dr_name[20],dr_phn[20];
char dr_age[100];
}d;

struct luxur{
char ln[20],s[20],seat[20],fc[20];
}lu;

struct lux{
char lu_id[20],lu_nm[20],lu_rent[20];
}lo;

struct suvs{
char sn[20],s[20],seat[20],fc[20];
}su;

struct sd{
char sv_id[20],sv_nm[20],sv_rent[20];
}so;

struct mi{
char mn[20],s[20],seat[20],fc[20];
}mu;

struct mic{
char mc_id[20],mc_nm[20],mc_rent[20];
}mi;


struct bs{
char rt_id[20];
char rt_nm[20];
double rent;
}rn;

    FILE *date;
    FILE *drive;
    FILE *driver;
    FILE *luxury;
    FILE *vec;
    FILE *rent;
    FILE *rt_reserv;
    FILE *suv;
    FILE *micro;
    FILE *bs;
    FILE *bs_seat;
    FILE *avail_1;
    FILE *up;
    FILE *rentr;
    FILE *name;

int operation,n;

double avail,set,book;

char dt[30],dr[30],vc[30],rt[30],rnt[30],agree[30],cr[100];

char ab[20],bc[20],cd[20],de[20],ef[20];

char bnm[20],sz[20],fitc[20];

printf("\nEnter Go Date:- ");
scanf("%s",&dt);
date=fopen("Project_File//Date//.txt","w");
if(date == NULL){
    printf("Error!");
    exit(1);
}
fprintf(date,"%s",dt);
fclose(date);

system("CLS");
headline();
user();
printf("   Reserving Date\n");
printf("---------------------\n");
printf("     %s",dt);


printf("\n\t\tSelect a Driver(ID)-\n");
drive=fopen("Project_File\\Driver Information\\.txt","r");
    if(drive==NULL){
    printf("Could not find the file!\n");
        exit(1);
        }
    while(fread(&d,sizeof(d),1,drive))
    printf("\n\t\tDriver ID           : %s\n\t\tDriver Name         : %s\n\t\tDriver Phone Number : %s\n\t\tDriver Age          : %s\n",d.dr_id,d.dr_name,d.dr_phn,d.dr_age);
fclose(drive);
drive=fopen("Project_File\\Driver Information\\.txt","r");
printf("\t\t");
scanf("%s",&dr);
    while(fread(&d,sizeof(d),1,drive)){
        if(strcmp(dr,d.dr_id)==0){
            system("CLS");
            headline();
            user();
            printf("     Date\n");
            printf("---------------\n");
            printf("   %s",dt);
            printf("\n\t\t    Driver");
            printf("\n\t\t---------------");
            printf("\n\t\tDriver ID           : %s\n\t\tDriver Name         : %s\n\t\tDriver Phone Number : %s\n\t\tDriver Age          : %s\n",d.dr_id,d.dr_name,d.dr_phn,d.dr_age);
            fclose(drive);
            driver=fopen("Project_File//Dri_reserv//.txt","w");
            if(driver == NULL){
                printf("Error");
                exit(1);
            }
            fprintf(driver,"%s",d.dr_name);
            fclose(driver);

            printf("\n\t\t\tSelect Vehicle Type-\n");
            printf("\n\n\t\t\t1. Car\n\t\t\t2. Bus\n");
            printf("\n\t\t\t");
            scanf("%d",&n);
            if(n==1){
                system("CLS");
                headline();
                user();
            printf("     Date\n");
            printf("---------------\n");
            printf("   %s",dt);
            printf("\n\t\t    Driver");
            printf("\n\t\t---------------");
            printf("\n\t\tDriver ID           : %s\n\t\tDriver Name         : %s\n\t\tDriver Phone Number : %s\n\t\tDriver Age          : %s\n",d.dr_id,d.dr_name,d.dr_phn,d.dr_age);
            printf("\n\t\t\tCar List-\n");
            printf("\n\t\t\t1. Luxury\n\t\t\t2. Suv\n\t\t\t3. Microbus\n");
            printf("\n\t\t\tSelect One-\n");
            printf("\n\t\t\t");
            scanf("%d",&n);
            if(n==1){               ///////////////// Luxury select
                system("CLS");
                headline();
                user();
            printf("     Date\n");
            printf("---------------\n");
            printf("   %s",dt);
            printf("\n\t\t    Driver");
            printf("\n\t\t---------------");
            printf("\n\t\tDriver ID           : %s\n\t\tDriver Name         : %s\n\t\tDriver Phone Number : %s\n\t\tDriver Age          : %s\n",d.dr_id,d.dr_name,d.dr_phn,d.dr_age);
luxury=fopen("Project_File//Luxury//.txt","r");
printf("\n\t\t\t  Vehicles");
printf("\n\t\t\t-------------");
while(fread(&lu,sizeof(lu),1,luxury))
printf("\n\t\t\tCar Name              : %s\n\t\t\tCar Size              : %s\n\t\t\tNumber of Seat        : %s\n\t\t\tFitness Condition     : %s\n\n",lu.ln,lu.s,lu.seat,lu.fc);
fclose(luxury);

               vec=fopen("Project_File//Vec_reserv//.txt","w");
               if(vec==NULL){
                printf("error");
                exit(1);
               }
            fprintf(vec,"%s",lu.ln);
            fclose(vec);

            /////////////////// route select ////////
               printf("\n\t\t\t\tSelect a Route (ID)-\n");
               rent=fopen("Project_File//Luxury_rent//.txt","r");
            if(rent == NULL){
             printf("File does not exist");
                   exit(1);
                 }
          while(fread(&lo,sizeof(lo),1,rent))
         printf("\n\t\t\t\t%s. %s\n\t\t\t\t   Rent   : %s",lo.lu_id,lo.lu_nm,lo.lu_rent);
             fclose(rent);
              printf("\n\t\t\t\t");
              scanf("%s",&rt);
         rent=fopen("Project_File//Luxury_rent//.txt","r");
          while(fread(&lo,sizeof(lo),1,rent)){
            if(strcmp(rt,lo.lu_id)==0){
                system("ClS");
                headline();
                user();
                printf("     Date\n");
            printf("---------------\n");
            printf("   %s",dt);
            printf("\n\t\t    Driver");
            printf("\n\t\t---------------");
            printf("\n\t\tDriver ID           : %s\n\t\tDriver Name         : %s\n\t\tDriver Phone Number : %s\n\t\tDriver Age          : %s\n",d.dr_id,d.dr_name,d.dr_phn,d.dr_age);
             printf("\n\t\t\t  Vehicles");
             printf("\n\t\t\t-------------");
             printf("\n\t\t\tCar Name              : %s\n\t\t\tCar Size              : %s\n\t\t\tNumber of Seat        : %s\n\t\t\tFitness Condition     : %s\n\n",lu.ln,lu.s,lu.seat,lu.fc);
            printf("\n\t\t\t\t      Route");
            printf("\n\t\t\t\t-----------------\n");
              printf("\t\t\t\t   %s",lo.lu_nm);
              printf("\n\n\t\t\tYou have to pay %s taka.\n",lo.lu_rent);

            rt_reserv=fopen("Project_File//Route_reserv//.txt","w");
            if(rt_reserv==NULL){
                printf("Error");
                exit(1);
            }
            fprintf(rt_reserv,"%s",lo.lu_nm);
            fclose(rt_reserv);

            rent=fopen("Project_File//Rent//.txt","w");
            if(rent==NULL){
                printf("Error");
                exit(1);
            }
            fprintf(rent,"%s",lo.lu_rent);
            fclose(rent);

//////////////////////////////////////////  history
  struct dri{
char dr_id[20],dr_name[20],dr_phn[20];
char dr_age[100];
}d;


            rentr=fopen("Project_File//History//.txt","a");
            if(rentr==NULL){
                printf("Error!");
                exit(1);
            }

            name=fopen("Project_File//Name//.txt","r");
            fscanf(name,"%[^\n]s",r.name);

            date=fopen("Project_File//Date//.txt","r");
            fscanf(date,"%[^\n]s",dt);

            vec=fopen("Project_File//Vec_reserv//.txt","r");
            fscanf(vec,"%[^\n]s",lu.ln);

            rt_reserv=fopen("Project_File//Route_reserv//.txt","r");
            fscanf(rt_reserv,"%[^\n]s",lo.lu_nm);

            rent=fopen("Project_File//Rent//.txt","r");
            fscanf(rent,"%[^\n]s",lo.lu_rent);

            driver=fopen("Project_File//Dri_reserv//.txt","r");
            fscanf(driver,"%[^\n]s",d.dr_name);


             fprintf(rentr,"%s    %s    %s    %s    %s    %s\n",r.name, dt, d.dr_name, lu.ln, lo.lu_nm, lo.lu_rent);

             fclose(rentr);
             fclose(driver);
             fclose(date);
             fclose(vec);
             fclose(name);
             fclose(rt_reserv);
             fclose(rent);
             fclose(regist);



//////////////////////////////////////////  history

            printf("\n\n\t\t\t\t\t\tSelect a Payment Method-\n");
            printf("\n\t\t\t\t\t\t1. Add Credit or Debit Card\n\t\t\t\t\t\t2. Bkash (for bangladesh)\n");
            scanf("%d",&n);
            if(n==1){
                printf("\n\t\t\t\t\t\tCard Number:- ");
                scanf("%s",&cr);
                printf("\n\t\t\t\t\t\tA confirmation email has been sent on your account.\n\t\t\t\t\t\t\tThank You.");
                exit(1);
            }
            else{
                printf("\n\t\t\t\t\t\tPlease send your money to the following bkash agent number-\n");
            printf("\n\t\t\t\t\t\t\t017********\n\t\t\t\t\t\t\t018********\n\t\t\t\t\t\t\t019********\n\n\t\t\t\t\t\tThank You.\n");
            printf("\n\t\t\t\t\t\tA confirmation message sent on your phone number.\n");
            exit(1);
            }
break;
            }
            else{
                    system("CLS");
            headline();
            user();
                printf("Wrong Choice!\n");

            }
          }
            }

            else if(n==2){     ///////////////  SUV select
                 system("CLS");
                headline();
                user();
            printf("     Date\n");
            printf("---------------\n");
            printf("   %s",dt);
            printf("\n\t\t    Driver");
            printf("\n\t\t---------------");
            printf("\n\t\tDriver ID           : %s\n\t\tDriver Name         : %s\n\t\tDriver Phone Number : %s\n\t\tDriver Age          : %s\n",d.dr_id,d.dr_name,d.dr_phn,d.dr_age);
suv=fopen("Project_File//Suv//.txt","r");
printf("\n\t\t\t  Vehicles");
printf("\n\t\t\t-------------");
while(fread(&su,sizeof(su),1,suv))
printf("\n\n\t\t\tCar Name             : %s\n\t\t\tCar Size             : %s\n\t\t\tNumber of Seat       : %s\n\t\t\tFitness Condition    : %s\n",su.sn,su.s,su.seat,su.fc);
fclose(suv);

               vec=fopen("Project_File//Vec_reserv//.txt","w");
               if(vec==NULL){
                printf("error");
                exit(1);
               }
            fprintf(vec,"%s",su.sn);
            fclose(vec);

                        /////////////////// route select ////////
               printf("\n\t\t\t\tSelect a Route (ID)-\n");
rent=fopen("Project_File//Suv_rent//.txt","r");
if(rent == NULL){
    printf("File does not exist");
    exit(1);
}
while(fread(&so,sizeof(so),1,rent))
printf("\n\n\t\t\t\t%s. %s\n\t\t\t\t   Rent   : %s",so.sv_id,so.sv_nm,so.sv_rent);
fclose(rent);
              printf("\n\t\t\t\t");
              scanf("%s",&rt);
          rent=fopen("Project_File//Suv_rent//.txt","r");
          while(fread(&so,sizeof(so),1,rent)){
            if(strcmp(rt,so.sv_id)==0){
                system("ClS");
                headline();
                user();
                printf("     Date\n");
            printf("---------------\n");
            printf("   %s",dt);
            printf("\n\t\t    Driver");
            printf("\n\t\t---------------");
            printf("\n\t\tDriver ID           : %s\n\t\tDriver Name         : %s\n\t\tDriver Phone Number : %s\n\t\tDriver Age          : %s\n",d.dr_id,d.dr_name,d.dr_phn,d.dr_age);
             printf("\n\t\t\t  Vehicles");
             printf("\n\t\t\t-------------");
            printf("\n\n\t\t\tCar Name             : %s\n\t\t\tCar Size             : %s\n\t\t\tNumber of Seat       : %s\n\t\t\tFitness Condition    : %s\n",su.sn,su.s,su.seat,su.fc);
            printf("\n\t\t\t\t      Route");
            printf("\n\t\t\t\t-----------------\n");
              printf("\t\t\t\t   %s",so.sv_nm);
              printf("\n\n\t\t\tYou have to pay %s taka.\n",so.sv_rent);

            rt_reserv=fopen("Project_File//Route_reserv//.txt","w");
            if(rt_reserv==NULL){
                printf("Error");
                exit(1);
            }
            fprintf(rt_reserv,"%s",so.sv_nm);
            fclose(rt_reserv);

            rent=fopen("Project_File//Rent//.txt","w");
            if(rent==NULL){
                printf("Error");
                exit(1);
            }
            fprintf(rent,"%s",so.sv_rent);
            fclose(rent);

////////////////////////history

  struct dri{
char dr_id[20],dr_name[20],dr_phn[20];
char dr_age[100];
}d;


            rentr=fopen("Project_File//History//.txt","a");
            if(rentr==NULL){
                printf("Error!");
                exit(1);
            }

            name=fopen("Project_File//Name//.txt","r");
            fscanf(name,"%[^\n]s",r.name);

            date=fopen("Project_File//Date//.txt","r");
            fscanf(date,"%[^\n]s",dt);

            driver=fopen("Project_File//Dri_reserv//.txt","r");
            fscanf(driver,"%[^\n]s",d.dr_name);

            vec=fopen("Project_File//Vec_reserv//.txt","r");
            fscanf(vec,"%[^\n]s",su.sn);

            rt_reserv=fopen("Project_File//Route_reserv//.txt","r");
            fscanf(rt_reserv,"%[^\n]s",so.sv_nm);

            rent=fopen("Project_File//Rent//.txt","r");
            fscanf(rent,"%[^\n]s",so.sv_rent);


             fprintf(rentr,"%s    %s    %s    %s    %s    %s\n",r.name, dt, d.dr_name, su.sn, so.sv_nm, so.sv_rent);

             fclose(rentr);
             fclose(driver);
             fclose(date);
             fclose(vec);
             fclose(name);
             fclose(rt_reserv);
             fclose(rent);
             fclose(regist);



////////////////history
            printf("\n\n\t\t\t\t\t\tSelect a Payment Method-\n");
            printf("\n\t\t\t\t\t\t1. Add Credit or Debit Card\n\t\t\t\t\t\t2. Bkash (for bangladesh)\n");
            scanf("%d",&n);
            if(n==1){
                printf("\n\t\t\t\t\t\tCard Number:- ");
                scanf("%s",&cr);
                printf("\n\t\t\t\t\t\tA confirmation email has been sent on your account.\n\t\t\t\t\t\t\tThank You.");
                exit(1);
            }
            else{
                printf("\n\t\t\t\t\t\tPlease send your money to the following bkash agent number-\n");
            printf("\n\t\t\t\t\t\t\t017********\n\t\t\t\t\t\t\t018********\n\t\t\t\t\t\t\t019********\n\n\t\t\t\t\t\tThank You.\n");
            printf("\n\t\t\t\t\t\tA confirmation message sent on your phone number.\n");
            exit(1);
            }

            }

            }
        }
        else if(n==3){               ////////////  Micro select
                system("CLS");
                headline();
                user();
            printf("     Date\n");
            printf("---------------\n");
            printf("   %s",dt);
            printf("\n\t\t    Driver");
            printf("\n\t\t---------------");
            printf("\n\t\tDriver ID           : %s\n\t\tDriver Name         : %s\n\t\tDriver Phone Number : %s\n\t\tDriver Age          : %s\n",d.dr_id,d.dr_name,d.dr_phn,d.dr_age);
micro=fopen("Project_File//Microbus//micro.txt","r");
printf("\n\t\t\t  Vehicles");
printf("\n\t\t\t-------------");
while(fread(&mu,sizeof(mu),1,micro))
 printf("\n\n\t\t\tCar Name            : %s\n\t\t\ttCar Size            : %s\n\t\t\tNumber of Seat      : %s\n\t\t\tFitness Condition   : %s\n\n",mu.mn,mu.s,mu.seat,mu.fc);
fclose(micro);

               vec=fopen("Project_File//Vec_reserv//.txt","w");
               if(vec==NULL){
                printf("error");
                exit(1);
               }
            fprintf(vec,"%s",mu.mn);
            fclose(vec);

            /////////////////// route select ////////
               printf("\n\t\t\t\tSelect a Route (ID)-\n");
rent=fopen("Project_File//Micro_rent//.txt","r");
if(rent == NULL){
    printf("File does not exist");
    exit(1);
}
while(fread(&mi,sizeof(mi),1,rent))
printf("\n\n\t\t\t\t%s. %s\n\t\t\t\t   Rent   : %s",mi.mc_id,mi.mc_nm,mi.mc_rent);
             fclose(rent);
              printf("\n\t\t\t\t");
              scanf("%s",&rt);
        rent=fopen("Project_File//Micro_rent//.txt","r");
          while(fread(&mi,sizeof(mi),1,rent)){
            if(strcmp(rt,mi.mc_id)==0){
                system("ClS");
                headline();
                user();
                printf("     Date\n");
            printf("---------------\n");
            printf("   %s",dt);
            printf("\n\t\t    Driver");
            printf("\n\t\t---------------");
            printf("\n\t\tDriver ID           : %s\n\t\tDriver Name         : %s\n\t\tDriver Phone Number : %s\n\t\tDriver Age          : %s\n",d.dr_id,d.dr_name,d.dr_phn,d.dr_age);
             printf("\n\t\t\t  Vehicles");
             printf("\n\t\t\t-------------");
           printf("\n\n\t\t\tCar Name            : %s\n\t\t\tCar Size            : %s\n\t\t\tNumber of Seat      : %s\n\t\t\tFitness Condition   : %s\n\n",mu.mn,mu.s,mu.seat,mu.fc);
            printf("\n\t\t\t\t      Route");
            printf("\n\t\t\t\t-----------------\n");
              printf("\t\t\t\t   %s",mi.mc_nm);
              printf("\n\n\t\t\tYou have to pay %s taka.\n",mi.mc_rent);

            rt_reserv=fopen("Project_File//Route_reserv//.txt","w");
            if(rt_reserv==NULL){
                printf("Error");
                exit(1);
            }
            fprintf(rt_reserv,"%s",mi.mc_nm);
            fclose(rt_reserv);

            rent=fopen("Project_File//Rent//.txt","w");
            if(rent==NULL){
                printf("Error");
                exit(1);
            }
            fprintf(rent,"%s",mi.mc_rent);
            fclose(rent);



              struct dri{
char dr_id[20],dr_name[20],dr_phn[20];
char dr_age[100];
}d;


            rentr=fopen("Project_File//History//.txt","a");
            if(rentr==NULL){
                printf("Error!");
                exit(1);
            }

            name=fopen("Project_File//Name//.txt","r");
            fscanf(name,"%[^\n]s",r.name);

            date=fopen("Project_File//Date//.txt","r");
            fscanf(date,"%[^\n]s",dt);

            driver=fopen("Project_File//Dri_reserv//.txt","r");
            fscanf(driver,"%[^\n]s",d.dr_name);

            vec=fopen("Project_File//Vec_reserv//.txt","r");
            fscanf(vec,"%[^\n]s",mu.mn);

            rt_reserv=fopen("Project_File//Route_reserv//.txt","r");
            fscanf(rt_reserv,"%[^\n]s",mi.mc_nm);

            rent=fopen("Project_File//Rent//.txt","r");
            fscanf(rent,"%[^\n]s",mi.mc_rent);


             fprintf(rentr,"%s    %s    %s    %s    %s    %s\n",r.name, dt, d.dr_name, mu.mn, mi.mc_nm, mi.mc_rent);

             fclose(rentr);
             fclose(driver);
             fclose(date);
             fclose(vec);
             fclose(name);
             fclose(rt_reserv);
             fclose(rent);
             fclose(regist);




            printf("\n\n\t\t\t\t\t\tSelect a Payment Method-\n");
            printf("\n\t\t\t\t\t\t1. Add Credit or Debit Card\n\t\t\t\t\t\t2. Bkash (for bangladesh)\n");
            scanf("%d",&n);
            if(n==1){
                printf("\n\t\t\t\t\t\tCard Number:- ");
                scanf("%s",&cr);
                printf("\n\t\t\t\t\t\tA confirmation email has been sent on your account.\n\t\t\t\t\t\t\tThank You.");
                exit(1);
            }
            else{
                printf("\n\t\t\t\t\t\tPlease send your money to the following bkash agent number-\n");
            printf("\n\t\t\t\t\t\t\t017********\n\t\t\t\t\t\t\t018********\n\t\t\t\t\t\t\t019********\n\n\t\t\t\t\t\tThank You.\n");
            printf("\n\t\t\t\t\t\tA confirmation message sent on your phone number.\n");
            exit(1);
            }

        }
    }
             }

    else
    {
        printf("Wrong Choice!");
    }



            }
            else if(n==2)             /////////////////////////  BUS select
            {
                system("ClS");
                headline();
                user();
                printf("     Date\n");
            printf("---------------\n");
            printf("   %s",dt);
            printf("\n\t\t    Driver");
            printf("\n\t\t---------------");
            printf("\n\t\tDriver ID           : %s\n\t\tDriver Name         : %s\n\t\tDriver Phone Number : %s\n\t\tDriver Age          : %s\n",d.dr_id,d.dr_name,d.dr_phn,d.dr_age);
            printf("\n\t\t\t\tSelect a Route (ID)-\n");
             rent=fopen("Project_File//Bus_rent//.txt","r");
if(rent == NULL){
    printf("File does not exist");
    exit(1);
}
while(fread(&rn,sizeof(rn),1,rent))
printf("\n\n\t\t\t%s. %s\n\t\t\t   Rent   : %.0lf",rn.rt_id,rn.rt_nm,rn.rent);
fclose(rent);
            rent=fopen("Project_File//Bus_rent//.txt","r");
              printf("\n\t\t\t\t");
              scanf("%s",&rt);
              while(fread(&rn,sizeof(rn),1,rent)){
                if(strcmp(rt,rn.rt_id)==0){
                system("ClS");
                headline();
                user();
                printf("     Date\n");
            printf("---------------\n");
            printf("   %s",dt);
            printf("\n\t\t    Driver");
            printf("\n\t\t---------------");
            printf("\n\t\tDriver ID           : %s\n\t\tDriver Name         : %s\n\t\tDriver Phone Number : %s\n\t\tDriver Age          : %s\n",d.dr_id,d.dr_name,d.dr_phn,d.dr_age);
                printf("\n\t\t\t\t      Route");
            printf("\n\t\t\t\t-----------------\n");
              printf("\t\t\t\t   %s",rn.rt_nm);
                rt_reserv=fopen("Project_File//Route_reserv//.txt","w");
            if(rt_reserv==NULL){
                printf("Error");
                exit(1);
            }
            fprintf(rt_reserv,"%s",rn.rt_nm);
            fclose(rt_reserv);


bs=fopen("Project_File//Bus//bus.txt","r");
if(bs==NULL){

    printf("Error\n");
    exit(1);
}
printf("\n\n\t\t\t\t\t\t\t  Vehicles- BUS");
  printf("\n\t\t\t\t\t\t\t------------------");
bs_seat=fopen("Project_File//Bus_seat//v.txt","r");
if(bs_seat==NULL){
    printf("Sorry, a file does'nt exist !\n");
    exit(1);
}
fscanf(bs_seat,"%lf",&avail);
if(avail<=0){
    avail=0;
}
fclose(bs_seat);
avail_1=fopen("Project_File//Avail_1//.txt","r");
if(avail_1==NULL){
    printf("Error!\n");
    exit(1);
}
fscanf(avail_1,"%lf",&set);
fclose(avail_1);
fscanf(bs,"%s",bnm);
fscanf(bs,"%s",sz);
fscanf(bs,"%lf",&set);
getc(stdin);
fscanf(bs,"%s",fitc);

printf("\n\n\t\t\t\t\t\t\tName               : %s\n\t\t\t\t\t\t\tBus Size           : %s\n\t\t\t\t\t\t\tNumber of Seat     : %.0lf\n\t\t\t\t\t\t\tFitness Condition  : %s\n\n\t\t\t\t\t\t\tAvailable Seat     : %.0lf\n",bnm,sz,set,fitc,avail);
            vec=fopen("Project_File//Vec_reserv//.txt","w");
    if(vec==NULL){
    printf("error");
    exit(1);
}
fprintf(vec,"%s",bnm);
fclose(vec);
fclose(bs);
if(avail==0){
    printf("\n\t\t\t\t\t\t\tSorry, All seats have been booked!\n");
}
else{
printf("\n\t\t\t\t\t\t\tHow Many Seat You Want to Book?");
printf("\n\t\t\t\t\t\t\t");
scanf("%lf",&book);
if(book>set){
        avail_1=fopen("Project_File//Avail_1//.txt","r");
         fscanf(avail_1,"%lf",&set);

         bs_seat=fopen("Project_File//Bus_seat//v.txt","r");
        fscanf(bs_seat,"%lf",&avail);


    printf("\n\t\t\t\t\tYou can book only %.0lf seat",(set-avail));
    exit(1);
fclose(avail_1);
 fclose(bs_seat);
}
else{
avail=avail-book;
bs_seat=fopen("Project_File//Bus_seat//v.txt","w");
if(bs_seat==NULL){
    printf("Sorry, a file does'nt exist !\n");
    exit(1);
}
fprintf(bs_seat,"%.0lf",avail);
fclose(bs_seat);

printf("\t\t\t\t\t\t\tYou Have Booked %.0lf Seat Successfully!\n",book);
            //rent=fopen("Project_File//Bus_rent//.txt","r");
              printf("\n\n\t\t\t\tYou have to pay BDT %.0lf taka.\n",(book*rn.rent));

                rent=fopen("Project_File//Rent//.txt","w");
            if(rent==NULL){
                printf("Error");
                exit(1);
            }
            double a=(book*rn.rent);
            fprintf(rent,"%.0lf",a);
            fclose(rent);



struct dri{
char dr_id[20],dr_name[20],dr_phn[20];
char dr_age[100];
}d;


            rentr=fopen("Project_File//History//.txt","a");
            if(rentr==NULL){
                printf("Error!");
                exit(1);
            }

            name=fopen("Project_File//Name//.txt","r");
            fscanf(name,"%[^\n]s",r.name);

            date=fopen("Project_File//Date//.txt","r");
            fscanf(date,"%[^\n]s",dt);

            driver=fopen("Project_File//Dri_reserv//.txt","r");
            fscanf(driver,"%[^\n]s",d.dr_name);

            vec=fopen("Project_File//Vec_reserv//.txt","r");
            fscanf(vec,"%[^\n]s",bnm);

            rt_reserv=fopen("Project_File//Route_reserv//.txt","r");
            fscanf(rt_reserv,"%[^\n]s",rn.rt_nm);

            rent=fopen("Project_File//Rent//.txt","r");
            fscanf(rent,"%lf",&a);


             fprintf(rentr,"%s    %s    %s    %s    %s    %.0lf\n",r.name, dt, d.dr_name, bnm, rn.rt_nm, a);

             fclose(rentr);
             fclose(driver);
             fclose(date);
             fclose(vec);
             fclose(name);
             fclose(rt_reserv);
             fclose(rent);
             fclose(regist);



            printf("\n\n\t\t\t\t\t\tSelect a Payment Method-\n");
            printf("\n\t\t\t\t\t\t1. Add Credit or Debit Card\n\t\t\t\t\t\t2. Bkash (for bangladesh)\n");
            scanf("%d",&n);
            if(n==1){
                printf("\n\t\t\t\t\t\tCard Number:- ");
                scanf("%s",&cr);
                printf("\n\t\t\t\t\t\tA confirmation email has been sent on your account.\n\t\t\t\t\t\t\tThank You.");
                exit(1);
            }
            else{
                printf("\n\t\t\t\t\t\tPlease send your money to the following bkash agent number-\n");
            printf("\n\t\t\t\t\t\t\t017********\n\t\t\t\t\t\t\t018********\n\t\t\t\t\t\t\t019********\n\n\t\t\t\t\t\tThank You.\n");
            printf("\n\t\t\t\t\t\tA confirmation message sent on your phone number.\n");
            exit(1);
            }

}
}

                }
              }

            }
            else{
                printf("\n\nWrong Choice!\n\n");
                exit(1);
            }

break;
        }
                        else{
                        system("CLS");
                        headline();
                        user();
                        printf("Wrong Choice !");
                }

   }
}




