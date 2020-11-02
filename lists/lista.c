#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

/* Funcion que obtiene o conoce si la lista esta en el tope es decir en NULL
 *
 * @params l es una estructura que debe contener un valor distinto de NULL
 * @return devuelve el resultado de la comparacion l==NULL
 *
 */
int is_empty(lista l){
  return l==NULL;
}

/* Funcion que aniade valores a la lista, destancando que la lista es ligada
 *
 * @params l es una estructura la cual que da como continuo de la nueva
 *  lista
 * @params val es el nuevo valor que sera aniadido a la lista
 * @return devuelve una nueva lista l1 la cual contiene la lista l
 *
 */
lista add_value(lista l,T val){
  lista l1=(lista)malloc(sizeof(struct nodo));
  if(!l1){
    perror("Error asignando memoria"),exit(EXIT_FAILURE);
  }
  l1->value=val;
  l1->sig=l;
  return l1;
}

/* Funcion que devuelve el valor consiguiente de la lista
 *
 * @params l es una estructura de tipo lista
 * @return devuelve el valor consiguiente l->sig
 *
 */
lista sig_lista(lista l){
  return l->sig;
}

/* Funcion que devuelve el valor contenido de la lista
 *
 * @params l es una estructura de tipo lista
 * @return devuelve el valor l->value de l
 *
 */
T get_value(lista l){
  return l->value;
}

/* Funciones que ordenan de ascendente es decir de mayor a menor
 *
 * @params l es una estructura lista
 * @params v es el valor a ser agregado
 * @return devuelve una lista T
 *
 */
lista add_orden_asc(lista l,T v){
  if(is_empty(l)){
    return add_value(NULL,v);
  }
  if(is_equal_or_greater(v,get_value(l))){
    return add_value(l,v);
  }else{
    return add_value(add_orden_asc(sig_lista(l),v),get_value(l));
  }
}

/* Funciones que ordenan de ascendente es decir de menor a mayor
 *
 * @params l es una estructura lista
 * @params v es el valor a ser agregado
 * @return devuelve una lista T
 *
 */
lista add_orden_desc(lista l,T v){
  if(is_empty(l)){
    return add_value(NULL,v);
  }
  if(!is_equal_or_greater(v,get_value(l))){
    return add_value(l,v);
  }else{
    return add_value(add_orden_asc(sig_lista(l),v),get_value(l));
  }
}

/* Funciones que ordenan de ascendente es decir de mayor a menor
 *
 * @params l es una estructura lista
 * @return devuelve una lista T
 *
 */
lista orden_asc(lista l){
  if(is_empty(l)){
    return l;
  }else{
    return add_orden_asc(orden_asc(sig_lista(l)),get_value(l));
  }
}

/* Funciones que ordenan de ascendente es decir de menow a mayor
 *
 * @params l es una estructura lista
 * @return devuelve una lista T
 *
 */
lista orden_desc(lista l){
  if(is_empty(l)){
    return l;
  }else{
    return add_orden_desc(orden_desc(sig_lista(l)),get_value(l));
  }
}

/* Funcion que imprime los valores de la lista
 *
 * @params l es una estructura lista
 *
 */
void print_lista(lista l){
  if(is_empty(l)){
    return;
  }
  print_T(get_value(l));
  print_lista(sig_lista(l));
}

/* Funcion que libera la memoria utilizada durante el programa
 *
 * @params l es una estructura lista
 *
 */
void free_mem(lista l){
  if(is_empty(l)){
    return;
  }
  lista l1=sig_lista(l);
  free_mem(l1);
  l->sig=NULL;
  free(l);
}

/* Funcion que mide el tamanio de la estructura lista
 *
 * @params l es una estructura lista
 *
 */
int length(lista l){
  return !is_empty(l)?(1+length(sig_lista(l))):(0);
}
