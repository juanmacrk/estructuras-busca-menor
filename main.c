#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
#include "alumno.h"
#define DIM 100

///prototipados

void muestraAlumnoS (stAlumno a[],int v);
int buscaPosicionMenorStAlumnoPro (stAlumno a[],int v,int pos);
void ordenaArregloPorSeleccionStalumnosPro (stAlumno a[],int v);
void intercambioStAlumno(stAlumno *a,stAlumno *b);

///main
int main()
{
    stAlumno alumnos[DIM];
    int vAlumnos=0;

    vAlumnos=cargaAlumnoS(alumnos,DIM);
    muestraAlumnoS (alumnos,vAlumnos);
    system("cls");
    ordenaArregloPorSeleccionStalumnosPro (alumnos,vAlumnos);

    printf("\n-----------Lita de Alumnos--------------\n");
    muestraAlumnoS(alumnos,vAlumnos);

    return 0;
}

///funcion carga alumnos

int   cargaAlumnoS (stAlumno a[],int dim)
{
    char opcion;
    int i=0;
    while (i<dim&&opcion!=27)
    {
        system("cls");
        a[i]=cargaUnAlumno();
        i++;
        printf ("\n ESC para salir o enter para continuar\n");
        opcion=getch();
    }
    return i;
}
///funcion muestra alumnos

void muestraAlumnoS (stAlumno a[],int v)
{
    for (int i=0; i<v; i++)
    {
        muestraUnAlumno(a[i]);
    }
}


int buscaPosicionMenorStAlumnoPro (stAlumno a[],int v,int pos)
{
    int posMenor=pos;
    pos++;
    while(pos<v)
    {

        if (a[pos].matricula<a[posMenor].matricula)
        {
            posMenor=pos;

        }
        pos++;

    }
    return posMenor;
}


void ordenaArregloPorSeleccionStalumnosPro (stAlumno a[],int v)
{

    int posMenor;
    int i=0;
    while (i<v-1)
    {

        posMenor=buscaPosicionMenorStAlumnoPro(a,v,i);
        intercambioStAlumno(&a[posMenor],&a[i]);
        i++;
    }
}

void intercambioStAlumno(stAlumno *a,stAlumno *b)
{
    stAlumno aux =*a;
    *a=*b;
    *b=aux;
}
