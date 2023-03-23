/******************************************************************************
Programador: Estuardo A. Castillo Garcia 
carnet 21559 
Ejercicio #4
Programa: Librerias con operaciones aritmeticas y valor de pi 
Archivo: ejercicio4.c
Dependencias: operaciones.c y operaciones.h
Fecha de creación: 22-3-23
Última fecha de modificación: 22-3-23
*******************************************************************************/

#include <stdio.h>
#include "operaciones.h" //header file con nuestra libreria
int main(){
    float a, b; //variables 
    printf("-----Programa para operaciones aritmeticas------\n");
    printf("Por favor ingrese el primer valor: \n");
    scanf("%2f", &a);
    printf("Por favor ingrese el segundo valor: \n");
    scanf("%2f", &b);
    float suma = add(a, b); //llamada a cada funcion 
    float resta = sub(a, b);
    float producto = mult(a, b);
    float cociente = divs(a, b); 
    float valor_pi = pi();
    printf ("Resultados"); //despliegue de datos
    printf("Suma (a+b) = %2f\nResta (a-b)= %2f\nMultiplicacion (a*b)= %2f\nCociente (a/b)= %2f\n",suma, resta, producto, cociente);
    printf("Valor de pi: %2f", valor_pi);
    return 0;
}
