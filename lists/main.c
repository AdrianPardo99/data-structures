#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(void){
  lista l=NULL;
  register int i;
  for(i=0;i<100;i++){
    l=add_value(l,i);
  }
  print_lista(l);
  printf("Tamanio lista: %d\n",length(l));
  free_mem(l);
  return 0;
}
