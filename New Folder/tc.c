#include<stdio.h>  
int i,j;
void draw(char board[3][3])
      

{
    

for(i=0;i<=2;i++)


{
        

for(j=0;j<=2;j++)
        

{

printf("%c",board[i][j]);

if(j<2)

{
            

printf("|");
        

}
    }
    


printf("\n");
    


if(i<2)

{
       

printf("---|---|---\n");
                            

}
} 

printf("\n");


}



 

int checkwin(char board[3][3],char c)

{
                                                                                    
for (i=0;i<=2;i++)
   
{
       
if(board[i][0]==c && board[i][1]==c && board[i][2]==c)
       
{
           
return 1;
       
}
   }
   
for(j=0;j<=2;j++)
   
{
       
if(board[0][j]==c && board[1][j]==c && board[2][j]==c)
       
{
           
return 1;
       
}
    }
    
    
        
if(board[0][2]==c && board[1][1]==c && board[2][0])
        
{
            
return 1;
        
}

if(board[0][0]==c && board[1][1]==c && board[2][2])
        
{
            
return 1;
        
}

   return 0; 

    
}
 
  




int main() 
{
 char board[3][3];
int c1=0;
char player1= 'x';

char player2= 'o';
  

char currentplayer=1;   


int rows,column;
for(i=0;i<=2;i++)
    

{
        

for(j=0;j<=2;j++)
        

{
            

board[i][j]=' ';


}
    
}

while(c1<9)

{
    


draw(board);
 
if(currentplayer==1)
{


printf("player1 %c\n",player1);
}
else{
   printf("player1 %c\n",player2); 
}
 

printf("enter the rows & column");
 

scanf("%d %d",&rows,&column);
 

if(rows<0 || rows>2 || column<0 || column>2 || board[rows][column]!=' ')
 

{
     

printf("invalid move\n");


continue;

}


if(currentplayer==1)
{
    board[rows][column]='x';
}
else{
    board[rows][column]='o';
}
    





if(checkwin( board,currentplayer==1 ? 'x':'o'))
{
    draw(board);
    printf("player %d wins\n",currentplayer);
    return 0;
}


    
currentplayer=(currentplayer==1 )? 2:1;

c1++;
}
draw(board);
printf("it is draw");
 
return 0; 


}