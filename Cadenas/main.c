#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
    strlen
    strcpy
    strupr
    strlwr
    strcmp
    stricmp
    strcat concatenar
    */
    char palabra[10];
    char palabra2[10];
    char todo[50];
    int comp;
    printf("Ingrese una palabra: ");
    //scanf("%s", palabra); No se le pone el ampersam en este caso en concreto.
    gets(palabra);
    //lenght = strlen(palabra);

    strcpy(palabra2, "Perro");


    if(stricmp(palabra2, palabra)==0)//Si salta 1, la letra en abc ascii está despues, si salta 0, son iguales y si salta -1 está despues.
    {
        printf("Son iguales");
    }
    else
    {
        printf("No son iguales");
    }

    strcpy(todo, palabra); //Copy para sobreescribir el arroba.
    strcat(todo, palabra2);
    strcat(todo, "Chau");

    printf("\ntodo %s", todo);

    /*Nombre [15];
      apellido[15];
      apellidoNombre[?];
    */
    //printf("%d", comp);

    //printf("la palabra es %s y largo: %d", palabra, lenght);
    //fgets(palabra, 10, stdin);
    //printf("%s", palabra);


    return 0;
}
