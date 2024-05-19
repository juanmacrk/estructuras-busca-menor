#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
#define DIM 100
///estructuras

typedef struct
{
    int nota;
    int matricula;
    char nombre[30];
    char apellido[30];
} stAlumno;

///prototipados

stAlumno cargaUnAlumno ();
void muestraUnAlumno ();
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
    muestraAlumnoS(alumnos,vAlumnos);


    printf("Hello world!\n");
    return 0;
}
///funcion carga alumno

stAlumno cargaUnAlumno ()
{
    stAlumno a;
    printf ("carga de un alumno \n");

    printf ("ingrese el numero de matricula :\n ");
    scanf("%d",&a.matricula);
    fflush(stdin);
    printf ("ingrese el apellido :\n");
    gets(a.apellido);
    fflush(stdin);
    printf ("ingrese el nombre :\n");
    gets(a.nombre);
    printf ("ingrese la nota : \n");
    scanf("%d",&a.nota);

    return a;
}
///funcion muestra un alumno

void muestraUnAlumno (stAlumno a)
{
    printf ("\n==================================================\n");
    printf ("\nmatricula.........:%d\n",a.matricula);
    printf ("\nnombre............:%s %s\n",a.apellido,a.nombre);
    printf ("\nnota..............:%d\n",a.nota);
    printf ("\n==================================================\n");
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
