# PROBLEMA DE LA ECUACIÓN DE CALOR
Los archivos adjuntados en este repositorio permiten resolver la ecuación de calor. A continuación explicaremos que función cumple cada archivo y daremos una lista de pasos necesaria para el desarrollo de los mismos.

## tools.c
En este archivo se encuentran las funciones llamadas *Matgen*, *JacobiMethod* y *Mat_Vec_Mult*. La primera función se encarga de crear una matriz con reserva de memoria, la segunda es el método de Jacobi para matrices y la última es la  función de multiplicación matriz vector. 
## tools.h
Aquí se encuentran las cabeceras de las funciones que fueron creadas de en el archivo **tools.c**. 
## heatExp.c
Este archivo contiene el programa principial en donde se procede a desarrolar la solución del metodo de Euler explícito de la ecuación de calor.
## heatIm.c
Este archivo contiene el programa principial en donde se procede a desarrolar la solución del metodo de Euler ímplicito de la ecuación de calor.
## makefile
Aquí llamamos a los objetos necesarios para poder ejecutar el programa desde este archivo. Se crea un espacio de intrucciones conjuntas para facilitar la ejecución del código. **Es necesario que el archivo no posea una extensión específica, no debe ser un archivo .txt .c .exe u otro**

## Instrucciones:

