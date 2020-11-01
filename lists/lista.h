#ifndef LISTA_H
#define LISTA_H
#include "generic.h"
typedef struct nodo{
  T value;
  struct nodo *sig;
}*lista;


lista add_value(lista,T);
lista sig_lista(lista);
T get_value(lista);
void print_lista(lista);
void free_mem(lista);
int is_empty(lista);
int length(lista);

#endif
