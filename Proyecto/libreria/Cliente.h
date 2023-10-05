#ifndef CLIENTE_H
#define CLIENTE_H

#include "encabezados.h"

enum TipoClase { NINGUNO, SPINNING, YOGA, PILATES, STRETCHING, ZUMBA, BOXEO};
typedef TipoClase eTipoClase;

enum Dia { NINGUNO, LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO};
typedef Dia eDia;


struct FechaReserva {
    eDia Dia;
    u_int dia, mes, anyo;
}; typedef struct FechaReserva sFechaReserva;

struct HoraReserva {
    u_int hora, minutos;
}; typedef struct HoraReserva sHoraReserva;

struct Clases {
    eTipoClase TipCla;
    sFechaReserva FecRes[];
    sHoraReserva HorRes[];
}; typedef struct Clases sClases;

struct Musculacion {
    sFechaReserva FecRes[];
    sHoraReserva HorRes[];
}; typedef struct Musculacion sMusculacion;

struct Cliente {
    int Codigo;
    str Nombre, Apellido, Direccion, Correo, Telefono;
    sClases Clase[];
    sMusculacion Musc[];
}; typedef struct Cliente sCliente;

sCliente crearCliente(int Codigo, str Nombre, str Apellido, sFecha FacNac, str Telefono, str Correo, sClases Clase[], sMusculacion Musc[]);

#endif // CLIENTE_H
