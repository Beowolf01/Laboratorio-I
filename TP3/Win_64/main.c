#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    int len = 0;
    int i;
    int option = 0;
    Employee* aux;
    LinkedList* listaEmpleados = ll_newLinkedList();

    Employee* e1 = employee_newParametros("100", "Maria", "10");//ac� van los constructores
    e1->sueldo = 1000;//Ac� va el set sueldo.
    Employee* e2 = employee_newParametros("90", "Pedro", "15");
    e2->sueldo = 1800;
    Employee* e3 = employee_newParametros("101", "Ramiro", "20");
    e3->sueldo = 900;
    Employee* e4 = employee_newParametros("99", "Susana", "10");
    e4->sueldo = 1200;

    ll_add(listaEmpleados,e1);//Esto hay que hacer en el parser, primero crear los empleados y despues agregarlos a la lista
    ll_add(listaEmpleados,e2);
    ll_add(listaEmpleados,e3);
    ll_push(listaEmpleados, 1, e4);//ll_set me reemplaza a Pedro con Susana y ll_push me la deja en el medio de Pedro y Maria.

    len = ll_len(listaEmpleados);
    printf("Hay %d empleados cargados...\nListado\n", len);

    for(i=0; i<len; i++)
    {
        aux = (Employee*) ll_get(listaEmpleados, i);

        printf("%d--%s--%d--%d\n", aux->id, aux->nombre, aux->horasTrabajadas, aux->sueldo);//ac� usamos los getters en vez de las flchas.
    }

    printf("\nQuito 1 y muestro\n");

    aux = ll_pop(listaEmpleados, 1);//Buscar algo por ID y mostrar lo que removio.
    printf("Empleado borrado: %d--%s--%d--%d\n", aux->id, aux->nombre, aux->horasTrabajadas, aux->sueldo);

        len = ll_len(listaEmpleados);
    printf("Hay %d empleados cargados...\nListado\n", len);

    for(i=0; i<len; i++)
    {
        aux = (Employee*) ll_get(listaEmpleados, i);

        printf("%d--%s--%d--%d\n", aux->id, aux->nombre, aux->horasTrabajadas, aux->sueldo);//ac� usamos los getters en vez de las flchas.
    }

    ll_clear(listaEmpleados);
    if("%d\n\n",ll_isEmpty(listaEmpleados))
    {
        printf("No hay elementos en la lista");
    }
    else
    {
        len = ll_len(listaEmpleados);
    printf("Hay %d empleados cargados...\nListado\n", len);

    for(i=0; i<len; i++)
    {
        aux = (Employee*) ll_get(listaEmpleados, i);

        printf("%d--%s--%d--%d\n", aux->id, aux->nombre, aux->horasTrabajadas, aux->sueldo);//ac� usamos los getters en vez de las flchas.
    }
    }


    len = ll_len(listaEmpleados);
    for(i=0; i<len; i++)
    {
        aux = (Employee*) ll_get(listaEmpleados, i);

        printf("%d--%s--%d--%d\n", aux->id, aux->nombre, aux->horasTrabajadas, aux->sueldo);//ac� usamos los getters en vez de las flchas.
    }

    ll_sort(listaEmpleados, comparaPorNombre, 1);

             len = ll_len(listaEmpleados);
    printf("\nListado ordenado\n", len);

    for(i=0; i<len; i++)
    {
        aux = (Employee*) ll_get(listaEmpleados, i);

        printf("%d--%s--%d--%d\n", aux->id, aux->nombre, aux->horasTrabajadas, aux->sueldo);//ac� usamos los getters en vez de las flchas.
    }



    do{
        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                break;
        }
    }while(option != 10);
    return 0;
}
