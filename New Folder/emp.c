#include <stdio.h>

struct date
{
  int dd;
  int mm;
  int yy;
};
struct address
{
  int house;
  int street;
  int pincode;
  char state[20];
  char country[20];
};
struct employee
{
  int id;
  char name[20];
  char department[20];
  int salary;
  long contact;
  struct address a1;
  struct date d1;
};
void add()
{
  FILE *f1;
  struct employee e1;
  f1 = fopen("/home/sagar/Desktop/lorem/world71.txt", "a");

  printf("enter the emplyee id");
  scanf("%d", &e1.id);
  printf("enter the name");
  scanf("%s", &e1.name);
  // getchar();
  printf("enter the department");
  scanf("%s", &e1.department);
  // getchar();
  printf("enter employee salary");
  scanf("%d", &e1.salary);
  printf("enter the contact no");
  scanf("%ld", &e1.contact);
  printf("enter the house no");
  scanf("%d", &e1.a1.house);
  printf("enter the street no");
  scanf("%d", &e1.a1.street);
  printf("enter the pincode");
  scanf("%d", &e1.a1.pincode);
  printf("enter the state");
  scanf("%s", &e1.a1.state);
  printf("enter the country");
  scanf("%s", &e1.a1.country);

  fwrite(&e1, sizeof(e1), 1, f1);
  fclose(f1);
  printf("record added in file");
}

void display()
{
  FILE *f1;
  struct employee e1;
  f1 = fopen("/home/sagar/Desktop/lorem/world71.txt", "r");
  printf("record of employee\n");
  printf("\nID     Name\t\tSalary\t\tContact no\t\tAddress\n");
  while (fread(&e1, sizeof(e1), 1, f1) == 1)
  {

    printf("%d\t", e1.id);
    printf("%s\t", e1.name);
    printf("%d\t\t", e1.salary);
    printf("%ld\t\t", e1.contact);
    printf("%d,%d,%d,%s,%s\n", e1.a1.house,e1.a1.street,e1.a1.pincode,e1.a1.state,e1.a1.country);
  }
  fclose(f1);
}

void search()
{
  FILE *f1;
  struct employee e1;
  int id12;
  printf("enter your emp no");
  scanf("%d", &id12);
  f1 = fopen("/home/sagar/Desktop/lorem/world71.txt", "r");
  while (fread(&e1, sizeof(e1), 1, f1) == 1)
  {
    if (id12 == e1.id)
    {
      printf("record of employee\n");

      printf("Id:%d\n", e1.id);
      printf("name: %s\n", e1.name);
      printf("salary: %d\n", e1.salary);
      printf("contact no %ld\n", e1.contact);
      printf("house no: %d\n", e1.a1.house);
      printf("street no: %d\n", e1.a1.street);
      printf("pincode no: %d\n", e1.a1.pincode);
      printf("state: %s\n", e1.a1.state);
      printf("country: %s\n", e1.a1.country);
    }
  }
  fclose(f1);
}



void update()
{
  FILE *f1;
  int i;
  struct employee e1;
  fflush(stdin);
  printf("enter the employee no");
  scanf("%d", &i);
  f1 = fopen("/home/sagar/Desktop/lorem/world71.txt","r+");
  int flag = 0;
  while (fread(&e1, sizeof(e1), 1, f1))
  {
    if (e1.id == i)
    {
      printf("Enter the new name");
      fflush(stdin);
      scanf("%s",e1.name);
      fseek(f1, -sizeof(e1), SEEK_CUR);
      fwrite(&e1, sizeof(e1), 1, f1);
      flag = 1;
      break;
    }
  }

  if (flag == 1)
  {
    printf("record updated");
  }
  else
  {
    printf("record not found");
  }
  fclose(f1);
}


void delete()
{
  FILE *f1;
  FILE *f2;
  f1=fopen("/home/sagar/Desktop/lorem/world71.txt", "r");
  

  int i;
  struct employee e1;
  printf("enter the employee no delete");
  scanf("%d", &i);
  int flag = 0;
  f2=fopen("/home/sagar/Desktop/lorem/world70.txt", "w");
  while (fread(&e1, sizeof(e1), 1, f1)==1)
  {

   if(e1.id!=i)
  fwrite(&e1,sizeof(e1),1,f2);
  if(e1.id==i)
   flag=1;
   //break;
  }
  fclose(f1);
   fclose(f2);
   
   if(flag!=1)
   {
    printf("record not found");
    remove("/home/sagar/Desktop/lorem/world70.txt");
   }
   else{
  
    printf("record found and deleted");
    remove ("/home/sagar/Desktop/lorem/world71.txt");
     rename("/home/sagar/Desktop/lorem/world70.txt","/home/sagar/Desktop/lorem/world71.txt");

   }
    
    

    

  
  }
















int main()
{
  int n;
  char cho;
  do
  {
    printf("***WELCOME TO MY WORLD***\n");
    printf("1 : ADD A RECORD\n");
    printf("2 : SEARCH A RECORD\n");
    printf("3 : UPDATE A RECORD\n");
    printf("4 : DISPLAY A RECORD\n");
    printf("5 : DELETE A RECORD\n");
    printf("ENTER YOUR CHOICE");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
      add();
      break;
    case 2:
      search();
      break;
    case 3:
      update();
      break;
    case 4:
      display();
      break;
   case 5: delete();
       break;
    default:
      printf("invalid choice");
    }

    printf("\n Do you want to continue = ");

    scanf(" %c", &cho);
  } while (cho == 'y');

  return 0;
}