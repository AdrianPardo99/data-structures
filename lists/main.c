#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(void){
  lista l=NULL;
  register int i;
  for(i=0;i<100;i++){
    l=add_value(l,i);
  }
  /* Crea una nueva lista */
  lista l1=orden_asc(l);
  printf("Lista 1\n");
  print_lista(l);
  printf("Lista 2\n");
  print_lista(l1);
  printf("Tamanio lista: %d\n",length(l));
  free_mem(l);
  free_mem(l1);
  return 0;
}
