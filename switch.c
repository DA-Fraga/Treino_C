#include <stdio.h>

int main(){
    int i;

    printf ("1 = Portugues\n2 = Ingles\n3 = Espanhol\n0 = sair\n\n");
    printf ("Insira um numero de 0 a 3: \n");
    scanf ("%d", &i);

    switch(i){
        case 1: 
            printf("Ola :) ");  
            break;
        case 2:
            printf("Hello :) ");
            break;
        case 3:
            printf("Hola :) ");
            break;
        case 0:
            printf("Até logo :D ");
            return 0;
            break;
        default:
            printf ("\nDigite uma opção valida!!! \n");
            break;
    }
    printf ("\n\n\n");
}   