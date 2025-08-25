#include <stdio.h>

int main(){
// Movimentação do Bisbo
    int bispo = 0;

    while (bispo < 5)
    {
        printf("Direita cima\n");
        bispo++;
    }
    
// Movimentação da rainha
    int rainha = 0;
    do
    {
         printf("Esquerda\n", rainha++);
    
    } while (rainha < 8);

// Movimentação da torre

    
    for (int torre = 0; torre < 5; torre++)
    {
        printf("Frente\n");
    }

// Movimentação do cavalo

   int cavalo = 1;

   while (cavalo --)
   {
    for (int i = 0; i < 2; i++)
    {
        printf("Cima\n");
    }
   
    printf("Esquerda\n");
}




return 0;

}
 
