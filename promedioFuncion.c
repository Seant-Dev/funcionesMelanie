#include <stdio.h>

// Funcion tipo float (regresa valor tipo float)
// Esta es otra forma de definir una funcion, la declaracion y la
// definicion se hacen en la misma parte (antes del main )
float promedio(int n){
// Definicion de las varaibles que se ocupan en la funcion
int i = 1;
float sumaAcumulada = 0, x;

// Ciclo while que lee y acumula las 'n' calificaciones a promediar
while(i <= n){
	printf("Ingresa el valor #%d: ", i);
	scanf("%f", &x);
	sumaAcumulada = sumaAcumulada + x;
	i = i + 1;
}

// regresamos al main la division de la suma acumulativa dividida por
// el numero de alumnos 'n' lo que nos da el promedio total.
return sumaAcumulada/n;
}

// En la funcion PRINCIPAL lo unico que hacemos es pedir al usuario
// el numero de calificaciones que va a promediar.
main(){
// Declaracion de las variables utilizadas dentrod el main
int n;
float resultado;

// Pedimos al usuario que ingrese la cantidad de calificaciones a promediar
printf("Cuantos valores vas a promediar: ");
scanf("%d", &n);

// Asignamos el resultado regresado por la funcion a la varaible 'resultado'
resultado = promedio(n);

// Imprimimos el resultado con ayuda de la variable resultado
printf("El promedio es: %f \n", resultado);
}
