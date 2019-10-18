#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* miVector;
    int* auxVector;
    int x;

    miVector = (int*)malloc(sizeof(int)*5);
    if(miVector!=NULL)
    {
        for(x=0; x<5; x++)
        {
            *(miVector+x) = x+1;
        }
        for(x=0; x<5; x++)
        {
            printf("%d\n",*(miVector+x));
        }
        printf("Pido mas espacio\n");
        auxVector = (int*) realloc(miVector,sizeof(int)*10);
        if(auxVector!=NULL)
        {
            miVector = auxVector;
            for(x=5; x<10; x++)
            {
                *(miVector+x) = x+1;
            }
            for(x=0; x<10; x++)
            {
                printf("%d\n",*(miVector+x));
            }
            printf("Lo reducimos");

            miVector=realloc(miVector, sizeof(int)*3);
        }
    }
    else
    {
        printf("No encontre espacio");
    }


    return 0;
}
