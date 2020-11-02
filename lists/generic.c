#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "generic.h"
/*
 * @author Adrian Gonzalez Pardo
 */

/* Compara si ambos valores son iguales
 *
 * @params v es el primer valor a comparar con
 * @params v1 es el segun valor a comparar si son iguales
 * @return devuevle el valor de comparacion v==v1
 *
 */
int cmp(T v,T v1){
  return v==v1;
}

/* Compara si dos el valor 1 es mayor igual al valor 2
 *
 * @params v es el primer valor a comparar con
 * @params v1 es el segun valor a comparar si son iguales
 * @return devuevle el valor de comparacion v>=v1
 *
 */
int is_equal_or_greater(T v, T v1){
  return v>=v1;
}

/* Imprime el valor contenido
 *
 * @params v es el valor a imprimir
 *
 */
void print_T(T v){
  printf("Value: %d\n",v);
}
