#ifndef GENERIC_H
#define GENERIC_H
/*
 * @author Adrian Gonzalez Pardo
 */

/* Definiciones de un valor entero renombrado a T */
typedef int T;

/* Compara si ambos valores son iguales
 *
 * @params T es el primer valor a comparar con
 * @params T es el segun valor a comparar si son iguales
 * @return devuevle el valor de comparacion T==T
 *
 */
int cmp(T,T);

/* Compara si dos el valor 1 es mayor igual al valor 2
 *
 * @params T es el primer valor a comparar con
 * @params T es el segun valor a comparar si son iguales
 * @return devuevle el valor de comparacion T>=T
 *
 */
int is_equal_or_greater(T,T);

/* Imprime el valor contenido
 *
 * @params T es el valor a imprimir
 *
 */
void print_T(T);

#endif
