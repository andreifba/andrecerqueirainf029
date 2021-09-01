#include <stdio.h>
#include <stdlib.h>



int soma(int a, int b)//declaração da funcao soma
{
    int total;        //declaracao da variavel
    total = a+b;
    return total;
}



int main(void){     //funcao principal

    int x,y,resultado;
   
    
     printf("digite primeiro valor:");
     scanf("%d",&x);
     printf("digite segundo valor:");
     scanf("%d",&y);
     resultado = soma( x, y);  //invocacao da funcao
    
    printf("O resultado da soma eh: %d\n",resultado);

    return 0;
}


