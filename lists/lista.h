#ifndef LISTA_H
#define LISTA_H
#include "generic.h"

/*
 * @author Adrian Gonzalez Pardo
 */

typedef struct nodo{
  T value;
  struct nodo *sig;
}*lista;

/* Funcion que obtiene o conoce si la lista esta en el tope es decir en NULL
 *
 * @params lista es una estructura que debe contener un valor distinto de NULL
 * @return devuelve el resultado de la comparacion lista==NULL
 *
 */
int is_empty(lista);

/* Funcion que aniade valores a la lista, destancando que la lista es ligada
 *
 * @params lista es una estructura la cual que da como continuo de la nueva
 *  lista
 * @params T es el nuevo valor que sera aniadido a la lista
 * @return devuelve una nueva lista T la cual contiene la lista T
 *
 */
lista add_value(lista,T);

/* Funcion que devuelve el valor consiguiente de la lista
 *
 * @params lista es una estructura de tipo lista
 * @return devuelve el valor consiguiente lista
 *
 */
lista sig_lista(lista);

/* Funcion que devuelve el valor contenido de la lista
 *
 * @params lista es una estructura de tipo lista
 * @return devuelve el valor T de lista
 *
 */
T get_value(lista);

/* Funciones que ordenan de ascendente es decir de mayor a menor
 *
 * @params lista es una estructura lista
 * @params T es el valor a ser agregado
 * @return devuelve una lista T
 *
 */
lista add_orden_asc(lista,T);

/* Funciones que ordenan de ascendente es decir de menor a mayor
 *
 * @params lista es una estructura lista
 * @params T es el valor a ser agregado
 * @return devuelve una lista T
 *
 */
lista add_orden_desc(lista,T);

/* Funciones que ordenan de ascendente es decir de mayor a menor
 *
 * @params lista es una estructura lista
 * @return devuelve una lista T
 *
 */
lista orden_asc(lista);

/* Funciones que ordenan de ascendente es decir de menow a mayor
 *
 * @params lista es una estructura lista
 * @return devuelve una lista T
 *
 */
lista orden_desc(lista);

/* Funcion que imprime los valores de la lista
 *
 * @params lista es una estructura lista
 *
 */
void print_lista(lista);

/* Funcion que libera la memoria utilizada durante el programa
 *
 * @params lista es una estructura lista
 *
 */
void free_mem(lista);

/* Funcion que mide el tamanio de la estructura lista
 *
 * @params lista es una estructura lista
 *
 */
int length(lista);

#endif
