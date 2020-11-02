#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

/*
 * @author Adrian Gonzalez Pardo
 */

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
  lista l2=add_orden_asc(l1,1000);
  print_lista(l2);
  printf("Tamanio lista: %d\n",length(l2));
  free_mem(l1);
  free_mem(l);
  free_mem(l2);
  return 0;
}
