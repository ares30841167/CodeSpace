//Tic Tac Toe By Areschen
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int score[2] = {0,0};
int A,B,who,block,i,j,k,counttime = 0,end = 0,condition=0,restart = 0;
char disp[9] = {'1','2','3','4','5','6','7','8','9'};
int blockInfo[9] = {2,2,2,2,2,2,2,2,2};
int blockCheck[9] = {0,0,0,0,0,0,0,0,0};

void display(){

    printf("Plyaer 1 is O \t\t\t score %d : %d \n" , score[0] , score[1] );
    printf("Player 2 is X \t\t\t       P1   P2 \n");
    printf("\n");
    printf("\n");
    printf("\t           |       |       \n");
    printf("\t       %c   |   %c   |   %c   \n" , disp[0] , disp[1] , disp[2]); 
    printf("\t           |       |       \n"); 
    printf("\t    -------|-------|-------\n"); 
    printf("\t           |       |       \n"); 
    printf("\t       %c   |   %c   |   %c   \n" , disp[3] , disp[4] , disp[5]); 
    printf("\t           |       |       \n");
    printf("\t    -------|-------|-------\n");  
    printf("\t           |       |       \n");
    printf("\t       %c   |   %c   |   %c   \n" , disp[6] , disp[7] , disp[8]); 
    printf("\t           |       |       \n"); 
    printf("\n");
    printf("\n");

}

void JG(){

    for(i=0;i<=6;i=i+3)
    {
    
        if(blockInfo[i] == who && blockInfo[i+1] == who && blockInfo[i+2] == who)
        {
        
                condition = 1;
                end = 1;
        
        }
        else
        {
        
            for(j=0;j<=2;j++)
            {
    
            if(blockInfo[j] == who && blockInfo[j+3] == who && blockInfo[j+6] == who)
            {
        
                condition = 1;
                end = 1;
        
            }
            
            else
            {
            
                if(blockInfo[0] == who && blockInfo[4] == who && blockInfo[8] == who)
                {
    
                condition = 1;
                end = 1;
    
                }
                else
                {
                
                    if(blockInfo[2] == who && blockInfo[4] == who && blockInfo[6] == who)
                    {
    
                    condition = 1;
                    end = 1;
    
                    }
                    else
                    {
                    
                        if(counttime == 9)
                        {
    
                        condition = 2;
                        end = 1;
    
                        }
                        else
                        {
                        
                        
                        }
    
                    
                    
                    }
                
                
                
                }
            
            }
    
            }
    
        
        }
    
    }
    
    

}


void program(){
    srand( (unsigned)time(NULL));
    printf("Let computer pick numbers to decide who select block first!\n");
    printf("Player1's number is %d\n", A = (rand() % 100)+1);
    printf("Player2's number is %d\n", B = (rand() % 100)+1);
    
    Com:
    if(A > B)
    {
        printf("Player1 first!\n");
        who = 0;
    }
    else if(A < B)
    {
        printf("Player2 first!\n");
        who = 1;
    }
    else{
    
        printf("Draw! Let's pick again!\n");
        printf("Player1's number is %d\n", A = (rand() % 100)+1);
        printf("Player2's number is %d\n", B = (rand() % 100)+1);
        goto Com;
    
    }
    
    STR:
    
    
    if(who == 0)
    {
        Re1:
        printf("\nPlayer1 select your block:");
        scanf( "%d" ,  &block );
        if(1 <= block && block <=9)
        {

                if(blockCheck[block -1] != 1)
                {
                disp[block-1] = 'O';
                counttime++;
                blockInfo[block-1] = 0;
                blockCheck[block-1] = 1;
                JG();
                if(end == 0)
                {
                system("cls");
                display();
                who = 1;                
                goto STR;
                }
                else
                {
                  if(condition == 1)
                  {
                     printf("\nPlayer%d Win!\n" , who + 1);
                     score[0]++;
                  }
                  if(condition == 2)
                  {
                    printf("\nDraw!\n");
                  }
                }
                
                }
                else{
                
                printf("\nInvalid! Enter again!");
                goto Re1;
                
                }
        }
        else{
        
             printf("\nInvalid! Enter again!");
             goto Re1;
        }
           
    }
    else if(who == 1)
    {
        Re2:
        printf("\nPlayer2 select your block:");
        scanf( "%d" ,  &block );
        if(1 <= block && block <=9)
        {
                if(blockCheck[block -1] != 1)
                {
                disp[block-1] = 'X';
                counttime++;
                blockInfo[block-1] = 1;
                blockCheck[block-1] = 1;
                JG();
                if(end == 0)
                {
                system("cls");
                display();
                who = 0;                
                goto STR;
                }
                else
                {
                  if(condition == 1)
                  {
                     printf("\nPlayer%d Win!\n" , who + 1);
                     score[1]++;
                  }
                  if(condition == 2)
                  {
                    printf("\nDraw!\n");
                  }
                
                }
                
                }
                else{
                
                printf("\nInvalid! Enter again!");
                goto Re2;
                }
        }
        else{
        
             printf("\nInvalid! Enter again!");
             goto Re2;
        }
    } 
    
    


}

int main(void){
    display();
    program();
    system("pause");

}



