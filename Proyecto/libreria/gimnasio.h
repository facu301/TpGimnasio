#ifndef GIMNACIO_H
#define GIMNASIO_H

#include "Cliente.h"
#include "cupos.h"
#include "archivo.h"
#define MaxDefault 5

const sCliente ClienteNulo = { 0, "", "", "", "", "", {eTipoClase::NINGUNO, { 0, 0, 0, 0 }, { 0, 0 }}, {{ 0, 0, 0, 0 }, { 0, 0 }}};
const int cMaxSpinning = 45, cMaxYoga = 25, cMaxPilates = 15, cMaxStretching = 40, cMaxZumba = 50, cMaxBoxeo = 30; 


enum agrCliente  { ErrAgrEspacio = -1,  ExitoAgregar = 1 };
enum updCliente  { ErrUpdCliente = -2, ErrUpdIndex = -1,  ExitoModificar = 1 };
enum rmCliente   { ErrRmNomApe = -3,    ErrRmIndex = -2,   ErrRmCliente = -1, ExitoRemover = 1 }; 
enum srchCliente { ErrSrchValor = -2,   ErrSrchIndex = -1, ExitoBuscar = 1 };
enum printCliente { ErrPrintClientes = -1, ExitoPrint = 1}; //mio
enum resCliente { ErrFaltaCupos = -5, ErrClaseNoDisp = -4, ErrDiaNoDisp = -3, ErrHoraNoDisp = -2, ErrCliente = -1, ExitoReserva = 1};

typedef enum agrCliente  eAgrCliente;
typedef enum updCliente  eUpdCliente;
typedef enum rmCliente   eRmCliente;
typedef enum srchCliente eSrchCliente;
typedef enum printCliente ePrintCliente; //mio
typedef enum resCliente  eResCliente;

struct Gimnasio {
    sCliente* misClientes;
    u_int CantMaxima;
    u_int CantClientes;
}; typedef struct Gimnasio sGimnasio;

/* Otras funciones */
bool hayEspacio(sGimnasio* miGimnasio);

/* Funcion de agregar cliente */
eAgrCliente agregarCliente(sGimnasio* miGimnasio, sCliente miCliente);

/* Funciones de actualización del contacto */
eUpdCliente actualizarCliente(sGimnasio* miGimnasio, sCliente miCliente);
eUpdCliente actualizarCliente(sGimnasio* miGimnasio, u_int indexCliente, sCliente miCliente);

/* Funciones de eliminación del contacto */
eRmCliente removerCliente(sGimnasio* miGimnasio, str Nombre, str Apellido);
eRmCliente removerCliente(sGimnasio* miGimnasio, sCliente miCliente);
eRmCliente removerCliente(sGimnasio* miGimnasio, u_int indexCliente);
eRmCliente removerCliente(sGimnasio* miGimnasio, eDia Dia) //mio

/* Funciones de busqueda de contacto */
sCliente buscarCliente(sGimnasio* miGimnasio, str valorBusqueda);
sCliente buscarCliente(sGimnasio* miGimnasio, u_int indexCliente);

/* Funciones que imprimen por grupo (mio) */
ePrintCliente imprimirCliente(sGimnasio* miGimnasio, eDia Dia);
ePrintContacto imprimirContacto(sGimnasio* miGimnasio);

#endif // GIMNASIO_H
