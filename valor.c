#include <stdio.h>

void passagem_oir_valor (int par1)
{
    par1++;
    printf("Valor de par1 durante a função: %d\n", par1);
    
}

int main ()
{
    int par1 = 20;
    printf("valor de par1 antes da função: %d\n", par1);
    passagem_oir_valor(par1);
    printf("valor de par1 depois da função: %d\n", par1);

}