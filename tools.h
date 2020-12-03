#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/************** O B S E R V A C I O N E S *************/
/**
 Los archivos .h usualmente estan a disposición de los
 usuarios del modulo, y por tanto es conveniente tener
 la descripción de los prototipos de las funciones,
 revisen el archivo math.h para que vean
**/

double **Matgen(int fil, int col);
int JacobiMethod(int n, double **A, double *b, int *xi, double eps, int MaxIt);
double *Mat_Vec_Mult(int n, double **mat, double *arr);

#endif


