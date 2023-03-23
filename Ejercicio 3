/******************************************************************************
Programador: Estuardo A. Castillo Garcia 
carnet 21559 
Ejercicio #3
Programa: Despliegue de n valores de la serie de Fibonacci
el valor de n es determinado por el usuario
Fecha de creación: 22-3-23
Última fecha de modificación: 22-3-23
*******************************************************************************/
int termino_0 = 1; //variables para la sucesión
int termino_1 = 1;
int termino_2 = 0;
#include <stdio.h>
int main() {
 int i, n; //variables para contador
 printf("Por favor ingrese cuantos numeros se desea mostrar para sucesión: " );;
 scanf("%d", &n);
 for (i = 1; i <= n; i++) { //la serie de Fibonacci siempre comienza con dos valores en 1 
    if (i <=2){
        printf("%d= 1\n", i); 
    }else{
    termino_2 = termino_1 + termino_0;//calculo del termino n
    printf("%d= %d\n", i, termino_2); //despliegue del termino n y valor de sucesion que corresponde
    termino_0 = termino_2; //el termino sub 0 se vuelve el resultado 
    termino_1 = termino_2 -termino_1; //el siguiente termino es el resultado menos el que le precede
    }
 }
 return 0;
}
