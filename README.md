# Heat Equation
Este programa resuelve la ecuación de calor. En este programa encontraremos varios archivos en los cuales encontraresmos en cada uno de ellos una parte importante para poder desarrollar la ecuación de calor. A continuación explicaremos que función cumple cada archivo. 

En la extensión master nosotros encontraremos cuatro archivos.

## tools.c
En este archivo fueron creadas tres funciones llamadas *Matgen*, *JacobiMethod* y *Mat_Vec_Mult*. La cual la primera tiene la función de crear una matriz con errores de la memoria, la segunda es el metodo de jacobi para matrices y la ultima es la multiplicación matriz vector. 
## tools.h
Aquí llamamos a las funciones que fueron creadas de en el archivo **tools.c**. 
## heatExp.c
Este archivo contiene el programa principial en donde se procede a desarrolar la solución del metodo explicito de la ecuación de calor. 
## makefile
Aquí llamamos a los objetos necesarios para poder ejecutar el programa desde ese archivo. Esto para optimizar la cantidad de lineas de codigo.
