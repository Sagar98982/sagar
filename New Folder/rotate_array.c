#include<stdio.h>
int main()
{
int a[5],i,k,first,n;

printf("enter the marks");

for(i=0;i<=4;i++)

{

scanf("%d",&a[i]);

}

printf("enter the rotation times");

scanf("%d",&n);

for(k=1;k<=n;k++)

{

first=a[0];
                                                
for(i=0;i<=3;i++)

{
    
a[i]=a[i+1];
    

}

a[i]=first;

}

for(i=0;i<=4;i++)

{
    
printf(" %d",a[i]);

}
return 0;
}

