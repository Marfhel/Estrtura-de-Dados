#include <stdio.h>

void passagem_oir_valor (int *par1)
{
    *par1+=1;
    printf("Valor de par1 durante a função: %d\n", *par1);
    
}

int main ()
{
    int x = 20;
    printf("valor de x antes da função: %d\n", x);
    passagem_oir_valor(&x);
    printf("valor de x depois da função: %d\n", x);

}