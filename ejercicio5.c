/******************************************************************************
Programador: Estuardo A. Castillo Garcia 
carnet 21559 
Ejercicio #5
Programa: Punteros y Arrays
Archivo: ejercicio5.c
Dependencias: ninguna
Fecha de creación: 23-3-23
Última fecha de modificación: 23-3-23
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int array[6]; //tamaño de 6 para arrays
int array_2[6];
int main(){
    int i, n;
    printf("-----Programa con punteros arreglo de 6 valores------\n");
    for (i = 1; i<=6; i++){
    printf("Por favor ingrese el valor %d, de %d \n", i, 6);
    scanf("%d", &n); //se pide a usuario que ingrese los 6 datos
    array[i] = n;
    }
    int primer_valor = *(array+1); //puntero que apunta a primer elemento del array
    printf("El primer valor es : %d \n", primer_valor); 
    for (i = 1; i<=6; i++){ //acceso a todos los elementos del array
    array_2[i] = *(array+i); //direccionamiento por puntero
    array_2[i] = array_2[i]*2; //duplicar valor numerico
    printf("El valor %d multiplicado por 2 es: %d \n", i, *(array_2+i)); //ahora se referencia al valor 2 que se calculo
    }
    return 0;
}
