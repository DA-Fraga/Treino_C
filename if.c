#include<stdio.h>

int main(){
    int a, b, c;
    
    printf ("\nTestador de ifs\n\n");

printf ("Digite o valor de a: ");
scanf ("%d", &a);
printf ("\nDigite o valor de b: ");
scanf ("%d", &b);
printf ("\nDigite o valor de c: ");
scanf ("%d", &c);

    if(a > b)
        printf ("a eh maior que b \n");
        else
            printf ("a nao eh maior que b\n");
    if(b > c)
        printf ("b eh maior que c\n");
        else
            printf ("b nao eh maior que c\n");
    if(a > c)
        printf ("a eh maior que c\n");
        else
            printf ("a nao eh maior que c\n");

return (0);
}