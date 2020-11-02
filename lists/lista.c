#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


int is_empty(lista l){
  return l==NULL;
}

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

lista orden_asc(lista l){
  if(is_empty(l)){
    return l;
  }else{
    return add_orden_asc(orden_asc(sig_lista(l)),get_value(l));
  }
}

lista orden_desc(lista l){
  if(is_empty(l)){
    return l;
  }else{
    return add_orden_desc(orden_desc(sig_lista(l)),get_value(l));
  }
}

void print_lista(lista l){
  if(is_empty(l)){
    return;
  }
  print_T(get_value(l));
  print_lista(sig_lista(l));
}

void free_mem(lista l){
  if(is_empty(l)){
    return;
  }
  lista l1=sig_lista(l);
  free_mem(l1);
  l->sig=NULL;
  free(l);
}

int length(lista l){
  return !is_empty(l)?(1+length(sig_lista(l))):(0);
}
