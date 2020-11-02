#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "generic.h"

/*
int cmp(T v,T v1){
  return strcmp(v,v1);
}
*/
int cmp(T v,T v1){
  return v==v1;
}

int is_equal_or_greater(T v, T v1){
  return v<=v1;
}

void print_T(T v){
  printf("Value: %d\n",v);
}
