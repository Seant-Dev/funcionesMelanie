/*Programa que calcula la estatura y edad promedio de un grupo de personas*/
#include <stdio.h>

main(){

// Declaracion de variables
int numPersonas, conteo=1, edad; 
float estatura, sumaEstaturas = 0, sumaEdades = 0;

// Solicita el numero total de personas
printf("Ingrese la cantidad de personas: ");
scanf("%d", &numPersonas);

// Ciclo while para leer los datos de todas las personas
while(conteo <= numPersonas){
printf("Ingresa la estatura de la persona #%d: ", conteo);
scanf("%f", &estatura);
printf("Ingresa la edad de la persona #%d: ", conteo);
scanf("%d", &edad);

// Suma acumulativa de las edades y estaturas
sumaEdades = sumaEdades + edad;
sumaEstaturas = sumaEstaturas + estatura;
conteo = conteo + 1;
}

// Impresion de los resultados
// En esta seccion tambien se obtienen los promedios de edad y estatura
printf("\nLa edad promedio es: %f", sumaEdades/numPersonas);
printf("\nLa estatura promedio es: %f \n", sumaEstaturas/numPersonas);
}
