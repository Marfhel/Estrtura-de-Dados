#include <stdio.h>
#include <math.h>

void incrementa_vetor (int v[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        v[i]++;
    }
    
}

void imprime_vetor (int *v, int tamanho )
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("Valor: %d Posição %d\n", v[i], i);

    }
}

int main ()
{
    int v[5];

    for (int i=0; i < 5; i++)
    {
        v[i] = pow (i, 2);

    }

    imprime_vetor(v, 5);
    printf("INCREMENTA VETOR!\n");
    incrementa_vetor(v, 5);
    imprime_vetor(v, 5);
}