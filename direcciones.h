#ifndef DIRECCIONES_H_INCLUDED
#define DIRECCIONES_H_INCLUDED

typedef struct{

    char provincia[];
    char localidad[];
    char calle[];
    int altura;

}stDirecciones;

stDirecciones cargaUnaDireccion();
void muestraUnaDireccion();

#endif // DIRECCIONES_H_INCLUDED
