#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pArchive;
    //char aux[50];
    //char miNombre[50];
    int a[3]={3,8,9};
    int i;
    /*pArchive = fopen("miNombre.bin","rb");//w indica que vamos a guardar el archivo en formato texto, b si es binario, r para leer solo texto y rb para leer solo binario.

    fwrite(a, sizeof(int),3,pArchive);*/

    pArchive = fopen("miNombre.bin","rb");

    fread(a, sizeof(int),3,pArchive);

    for(i=0; i<3; i++)
    {
        printf("%d\n", a[i]);
    }

    //printf("%d", i);
    /*fprintf(pArchive, "Pepe\n");//Para escribir archivos de texto y no binarios.
    fprintf(pArchive, "Fatiga");

    fclose(pArchive);

    pArchive = fopen("miNombre.txt","r");

    while(!feof(pArchive))
    {
        fgets(miNombre, 50, pArchive);
        strcpy(miNombre[i], aux);
    }
    fclose(pArchive);

    for(i=0; i<3;i++)
    {
        printf("%s", miNombre[i]);
    }*/

    return 0;
}
