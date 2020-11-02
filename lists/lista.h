#ifndef LISTA_H
#define LISTA_H
#include "generic.h"
typedef struct nodo{
  T value;
  struct nodo *sig;
}*lista;


int is_empty(lista);
lista add_value(lista,T);
lista sig_lista(lista);
T get_value(lista);
lista add_orden_asc(lista,T);
lista add_orden_desc(lista,T);
lista orden_asc(lista);
lista orden_desc(lista);
void print_lista(lista);
void free_mem(lista);
int length(lista);

#endif
