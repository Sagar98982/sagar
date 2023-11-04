#include <stdio.h>
struct date
{
    int dd;
    int mm;
    int yyy;

};
struct employee
{
    int id;
    char name[20];
    char designation[20];
    char department[20];
    int salary;
    int contactno;
    char address[20];
    struct date d;

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
    default  : printf("\nInvalid command");


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
    printf("enter employee id");
    scanf("%d",&e1.id);
    getchar();
    printf("enter designation");
    fgets(e1.designation,20,stdin);
    getchar();
    printf("enter employee name");
    fgets(e1.name,20,stdin);
    getchar();
    printf("enter department");
    fgets(e1.department,20,stdin);
    getchar();
    printf("enter the salary");
    scanf("%d",&e1.salary);
    getchar();
    printf("enter the contact no");
    scanf("%d",&e1.contactno);
    getchar();
    printf("enter the address");
    fgets(e1.address,20,stdin);
    getchar();
    printf("enter the date of joining as dd/mm.yyy : ");
    scanf("%d %d %d",&e1.d.dd,&e1.d.mm,&e1.d.yyy);
    getchar();
   f1=fopen("new.txt","a");
    fwrite(&e1,sizeof(e1),1,f1);
    fclose(f1);

}