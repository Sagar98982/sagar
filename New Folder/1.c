#include <stdio.h>
struct date1
  { 
    int dd;
    int mm;
    int yyyy;
  };
struct employee
{
  int id;
  char name[20];
  char designation[100];
  char department[100];
  long salary;
  long contact_no;
  char address[200];
struct  date1 d1;
};
   
 


 FILE *f1,*f2;
 
 void menu();
 void add();
 void search();
 void update();
 void display();
 void delete();
 
 int main()
{
  int choice;
do{
   menu();
   printf("Enter your choice : ");
   scanf("%d",&choice);
   switch (choice)
  { 
    case 1 : add();
               break;
    case 2 : display();
               break;
   /* case 3 : search();
               break;           
    case 4 : update();
               break;
    case 5 : delete();
               break;*/                                 
    case 6 : printf("\n\nThanks!!!\n\n");
               break;          
    default  : printf("\nInvalid command");
               break;
               
   }
 }while(choice!=6); 
    
    return 0;
    
}
 
 void menu()
 {
   printf("\n~~Welcome to emplyoee managment system~~\n");
   printf("1) Add new employee \n");
   printf("2) Display all employee data \n");
   printf("3) Search for employee data \n");
   printf("4) Update the existing data\n");
   printf("5) Delete employee data\n");
   printf("6) Exit\n");
   }
   
 void add()
 {
   struct employee e1;
   printf("\nEnter employee ID : ");
   scanf("%d",&e1.id);
   getchar();
   printf("\nEnter Designation : ");
   fgets(e1.designation,100,stdin);
   getchar();
   printf("\nEnter employee name: ");
   fgets(e1.name,20,stdin);
   getchar();
   printf("\nEnter department : ");
   fgets(e1.department,100,stdin);
   printf("\nEnter the salary : ");
   getchar();
   scanf("%ld",&e1.salary);
   printf("\nEnter the contact No. : ");
   getchar();
   scanf("%ld",&e1.contact_no);
   printf("\nEnter the address:");
   getchar();
   fgets(e1.address,200,stdin);
   printf("\nEnter the date of joining as dd/mm/yyyy : ");
   getchar();
   scanf("%d%d%d",&e1.d1.dd,&e1.d1.mm,&e1.d1.yyyy);
   f1= fopen("new.txt","a");
   fwrite(&e1,sizeof(e1),1,f1);
   fclose(f1);
  } 
  
  void display()
{
  struct employee e1;
  f1 = fopen("new.txt", "r");
  printf("\n\nEmployee ID\tName\tDesignation\tDepartment\tSalary\tContact No.\tAddress\tDOJ");
  printf("\n---------------------------------------------------------------------------------------------\n");
  while (fread(&e1, sizeof(e1), 1, f1) == 1)
  {
    printf("%d\t",e1.id);
    printf("%s\t",e1.name);
    printf("%s\t",e1.designation);
    printf("%s\t",e1.department);
    printf("%ld",e1.salary);
    printf("%ld",e1.contact_no);
    printf("%s",e1.address);
    printf("%d/%d/%d",e1.d1.dd,e1.d1.mm,e1.d1.yyyy);
   
  }
  fclose(f1);
}

  /* printf("%d\t",e1.id);
    printf("%s\t",e1.name);
    printf("%s\t",e1.designation);
    printf("%s\t",e1.department);
    printf("%ld\t",e1.salary);
    printf("%ld\t",e1.contact_no);
    printf("%s\t",e1.address);
    printf("%d/%d/%d",e1.d1.dd,e1.d1.mm,e1.d1.yyyy);
   }*/ 
   
   
  //  printf("%d\t%s\t%s\t%s\t%ld\t%ld\t%s\t%d/%d/%d\n", e1.id, e1.name, e1.designation, e1.department, e1.salary, e1.contact_no, e1.address, e1.d1.dd, e1.d1.mm, e1.d1.yyyy);
   
   
 
 
 
 
