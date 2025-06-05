#include<stdio.h>

int main (){

    //index
    int nav1 = 3,nav2 = 3;
    int posnav1[2], posnav2[2];
    int mar [10] [10];

    //indexando as posiçoes dos navios
    posnav1[0] = 2;
    posnav1[1] = 5;

    posnav2[0]= 5;
    posnav2[1]= 1;

    //criação do tabuleiro
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mar[i][j]=0;
        }
        
    }
    //exibição do tabuleiro
   /* for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf(" %d ",mar[i][j]);
        }
        printf("\n");
    }*/
    printf("\n \n");

    //posicionamento dos navios no tabuleiro
    for (int i = 0; i < nav1; i++)
    {
        mar[posnav1[0]][posnav1[1]]= nav1;
        posnav1[1]++;
    }
    for (int i = 0; i < nav2; i++)
    {
        mar[posnav2[0]][posnav2[1]]= nav1;
        posnav2[0]++;
    }

    
    
     //exibição do tabuleiro com os barcos

     for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf(" %d ",mar[i][j]);
        }
        printf("\n");
    }
    
    
       printf("\n \n");

    return 0 ;
}