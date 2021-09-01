#include <stdio.h>
#include <stdlib.h>



int subtrai(int a, int b,int c)//declaração da funcao soma
{
    int total;        //declaracao da variavel
    total = a-b-c;
    return total;
}



int main(void){     //funcao principal

    int x,y,z,resultado;
   
    
     printf("digite primeiro valor:\n");
     scanf("%d",&x);
     printf("digite segundo valor:\n");
     scanf("%d",&y);
     printf("digite terceiro valor:\n");
     scanf("%d",&z);
     resultado = subtrai( x, y,z);  //invocacao da funcao
    
    printf("O resultado da soma eh: %d\n",resultado);

    return 0;
}


