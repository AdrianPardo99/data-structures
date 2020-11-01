#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


lista add_value(lista l,T val){
  lista l1=(lista)malloc(sizeof(struct nodo));
  if(!l1){
    perror("Error asignando memoria"),exit(EXIT_FAILURE);
  }
  l1->value=val;
  l1->sig=l;
  return l1;
}

lista sig_lista(lista l){
  return l->sig;
}

T get_value(lista l){
  return l->value;
}

void print_lista(lista l){
  if(is_empty(l)){
    return;
  }
  print_T(get_value(l));
  print_lista(l->sig);
}

void free_mem(lista l){
  if(is_empty(l)){
    return;
  }
  free_mem(sig_lista(l));
  free(l);
}

int is_empty(lista l){
  return l==NULL;
}

int length(lista l){
  return !is_empty(l)?(1+length(sig_lista(l))):(0);
}
