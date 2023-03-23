/******************************************************************************
Programador: Estuardo A. Castillo Garcia 
carnet 21559 
Ejercicio #1 
Programa: Despliegue de datos en consola con nombre y carnet del estudiante 
Fecha de creación: 22-3-23
Última fecha de modificación: 22-3-23
*******************************************************************************/

#include <stdio.h> //libreria estandar 

int main() {
 char nombre[8] = "Estuardo"; //Se define la cadena con comillas dobles y longitud para arreglo
 int carnet = 21559; //Se prefuere utilizar una variable numerica para el carnet 
 //declaracion de variables
 printf("El nombre del estudiante es %s con el carnet %d\n", nombre, carnet); //despliegue con printf
 return 0; //la funcion main retorna valor de 0 cuando finaliza. 
}
