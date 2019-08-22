#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    sexo = 'f';
    float altura;
    int edad;
    int edadMax;
    char seguir;
    seguir = 's';
    float alturaMax;

    do{
        printf("\n Ingrese una edad:");
        scanf("%d",&edad);
        printf("\n Ingrese una altura:");
        scanf("%f",&altura);
        fflush(stdin);
        printf("\n Ingrese el sexo (f/m):");
        scanf("%c",&sexo);
        fflush(stdin);
        printf("\n Cargar de nuevo? (s/n):");
        scanf("%c",&seguir);

        if(edadMax<edad && sexo == 'f'){
            alturaMax = altura;
            edadMax = edad;
        }

        }while(seguir == 's');

        printf("La altura de la mujer mas vieja: %f",alturaMax);










    return 0;
}
