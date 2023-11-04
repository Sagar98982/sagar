#include<stdio.h>
int main()
{
  int a[5],i,sum=0,avg;
  
printf("enter the marks of student");
  
for(i=0;i<=4;i++)
  
{
      
scanf("%d",&a[i]);
      
  
}
  
for(i=0;i<=4;i++)
                       
{
      
printf("%d",a[i]);
                                   (sum,avg,  array)
}
  
for(i=0;i<=4;i++)
  
{
      
sum=sum+a[i];
      
printf("%d\n",sum);}
      
{avg=sum/5;
      
printf("%d",avg);
  } 




   int a[5],i,even=0,odd=0,sum;
  
printf("enter the marks of student");
  
for(i=0;i<=4;i++)
  
{
      
scanf("%d",&a[i]);
      
                             (recheck_)
}
  
for(i=0;i<=4;i++)
  
{
      
printf("%d",a[i]);
  
}
  
for(i=0;i<=4;i++)
  
{
      
if(a[i]%2==0)
      
{
         
 even++;
         
 sum=sum+even;
         
 printf("even elements are %d\n",even);
      
}
else

{
    
odd++;
    
sum=sum+odd;
    
printf("odd elements are %d\n",odd);
}}







     int a[5],i,even=0,odd=0,sum;
  
printf("enter the marks of student");
  
for(i=0;i<=4;i++)
  
{
      
scanf("%d",&a[i]);
      
  
}
  
for(i=0;i<=4;i++)
                                           (even/odd count)recheck
{
      
printf("%d",a[i]);
  
}
  
for(i=0;i<=4;i++)
  
{
      
if(a[i]%2==0)
      
{
          
even++;
          
          
printf("even elements are %d\n",even);
      
}
else

{
    
odd++;

    
printf("odd elements are %d\n",odd);

}}






int a[5],i,even=0,odd=0;
  
printf("enter the marks of student");
  
for(i=0;i<=4;i++)
  
{
      
scanf("%d",&a[i]);
      
  
}
  
for(i=0;i<=4;i++)
  
{
      
printf("%d",a[i]);
  
}
  
for(i=0;i<=4;i++)
                                                 (even square/odd cube)recheck
{
      
if(a[i]%2==0)
      
{
         
 even++;
          
          
printf("even elements are %d\n",even*even);
      
}

else

{
    
odd++;

    
printf("odd elements are %d\n",odd*odd*odd);

}}






  int a[5],i,g;
  
printf("enter the marks of student");
  
for(i=0;i<=4;i++)
  
{
      
scanf("%d",&a[i]);
      
  
}
  
for(i=0;i<=4;i++)
                                      (greatest marks < symbol & smallest marks > symbol)
{
      
printf("%d",a[i]);
  
}
  
g=a[0];
  
for(i=1;i<=4;i++)
  
{
      
if(g<a[i])
     
 g=a[i];
      
 
 }
  
printf("greatest marks of student %d\n",g);









 int a[5],i,j,t;
 
printf("enter the no");
 
for(i=0;i<=4;i++)
 
{
     
scanf("%d",&a[i]);
                            (ascending/descending)recheck
}
     
for(i=0;i<=4;i++)
     
{
     
for(j=i+1;j<=4;j++)
     
{
        
if(a[i]>a[j])
        
{
            
t=a[j];
            
a[j]=a[i];
            
a[i]=t;
        
}}}
   






 int a[5],i;
    
 printf("enter the no");
    
 for(i=0;i<=4;i++)
                           (recheck index,value,position)
{
         
scanf("%d",&a[i]);
     
}
    
 for(i=0;i<=4;i++)
     
{
         
printf("index%d\t\n value%d\t\n position%d\t\n",i,a[i],i+1);
     
}  








int a[5],i,even=0,odd=0;
     
printf("enter the no");
     
for(i=0;i<=4;i++)
     
{
         
scanf("%d",&a[i]);
     
}
     

for(i=0;i<=4;i++)
     
{
         
if(a[i]%2==0)
                                       (even/odd ki index,value,position)
{
         
even++;
        
 printf("even elements are %d\n",i );
    
 }
     
else
     
{
     
odd++;
     
printf("odd elements are %d\n",i);

}}
}
//printf("%d",a[i]);