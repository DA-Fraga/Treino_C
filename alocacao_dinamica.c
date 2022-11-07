#include <stdio.h>
#include <stdlib.h>

void* malloc (size_t quantidade_bytes);

int main(){
    int *numeros;
    int n, i;

    printf ("Quantidade de numeros: ");
    scanf ("%d", &n);

    numeros = malloc(n*sizeof(int));

    for(i=0; i<n; i++){
        printf("Numero %d: ", i);
        scanf ("%d", &numeros[i]);
    }
    printf ("Numeros lidos: ");
    for(i=0; i<n; i++)
        printf ("%d ", numeros[i]);
        printf("\n");

    return 0;
}