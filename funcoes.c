#include <stdio.h>
    
    int multiplica(int a, int b)
    {
    int resultado;
    resultado = a * b;
    return(resultado); // retorna o valor para main
    }

int main(){
    int valor1, valor2, resultado;
printf ("Digite o primeiro valor: ");    
scanf ("%d", &valor1);
printf ("Digite o segundo valor: ");
scanf ("%d", &valor2);

resultado = multiplica(valor1, valor2); //chama a função e recebe o retorno

printf ("\nResultado = %d\n", resultado);

return 0;
}

