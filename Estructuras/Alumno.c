#include "Alumno.h"

int buscarLibre(eAlumno lista[], int cant)
{
   int i;
   int index = -1;
   for(i=0; i<cant; i++)
   {
       if(lista[i].estado==LIBRE)
       {
           index = i;
           break;
       }
   }
   return index;
}

void inicializarAlumnos(eAlumno listaDeAlumnos[], int cant)
{
    int i;
    for(i=0;i<cant;i++)
    {
        listaDeAlumnos[i].estado = LIBRE;
    }
}

void mostrarAlumno(eAlumno miAlumno)
{
    printf("%d--%s--%d\n", miAlumno.legajo, miAlumno.nombre, miAlumno.nota);

    //miAlumno.legajo=10000;//No se puede modificar una estructura adentro de una funcion.
}
eAlumno pedirAlumno()
{
     eAlumno miAlumno;

    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);
    printf("Ingrese nota: ");
    scanf("%d", &miAlumno.nota);

    miAlumno.estado = LIBRE;

    return miAlumno;
}
/*int compararAlumnoPorLegajo(eAlumno miAlumno, eAlumno otroAlumno)
{
    int comp = 0;
    if(miAlumno.legajo==otroAlumno.legajo)
    {
        comp = 1;
    }
    return comp;
}*/
void cargarAlumnos(eAlumno lista[], int cant)
{
    int i;
    i = buscarLibre(lista, cant);

    /*int flag = 0;
    for(i=0; i<cant; i++)
    {
        /*printf("Ingrese legajo: ");
        scanf("%d", &listaAlumnos[i].)

        if(lista[i].estado==LIBRE)
        {
            lista[i] = pedirAlumno();//Funcion para lo de arriba.
            lista[i].estado = OCUPADO;
            flag = 1;
            break;
        }*/
    }
    if(flag==0)
    {
        printf("No hay espacio\n");
    }
}
void mostrarListadoDeAlumnos(eAlumno lista[], int cant)
{
    int i;
    for(i=0; i<cant; i++)//Necesito un for para atravesar el array.
    {
        if(lista[i].estado==OCUPADO)
        {
            mostrarAlumno(lista[i]);
        }
    }

}
void ordenarAlumnosPorNombre(eAlumno lista[], int cant)
{
    int i;
    int j;
    eAlumno auxAlumno;

    for(i=0; i<cant-1; i++)
    {
        for(j=i+1; j<cant; j++)
        {
            if(strcmp(lista[i].nombre, lista[j].nombre)<0)
            {
                auxAlumno = lista[i];
                lista[i] = lista[j];
                lista[j] = auxAlumno;



                //auxAlumno.legajo = lista[i].legajo;No
                //lista[i].legajo = lista[j].legajo;lo
                //lista[j].legajo = auxAlumno.legajo;HAGAN
            }
        }
    }
}
void hardcoderAlumnos(eAlumno lista[], int cant)
{
    int legajo[]={101, 102, 105, 100, 103};
    int nota[]={10,5,9,7,8};
    char nombre[][50]={"Juan", "Maria", "Jose", "Mateo", "Rocio"};
    int i;

    for(i=0; i<cant; i++)
    {
        lista[i].legajo=legajo[i];//Acá si, da igual como esté codeado
        lista[i].nota=nota[i];//Solo es para cargar datos
        strcpy(lista[i].nombre, nombre[i]);
        lista[i].estado = OCUPADO;
    }

}

int buscarAlumnoPorLegajo(eAlumno* lista, int cant, int legajo)
{
    int i;
    int retorno = -1;
    if(lista!=NULL && cant>0)
    {
        for(i=0; i<cant; i++)
        {
            if(lista[i].legajo==legajo)
            {
                retorno = i;
                break;
            }
        }
    }
}
