#include <stdio.h>

// Declaracion de la funcion
int suma(int x, int y);

// Funcion principal del programa
main(){

// Declaracion de variables
int x, y, resultado;

// Lectura de datos
printf("Ingresa el valor de x: ");
scanf("%d", &x);
printf("Ingresa el valor de y: ");
scanf("%d", &y);

// Llamada a la funcion suma, en esta seccion pasamos los valores de x, y a la funcion
// previamente declarada, esa funcion realiza los calculos y nos regresa un resultado
// ese resultado se guarda en la variable 'resultado' 
resultado = suma(x, y);

//Imprimimos el resultado de nuesta suma utilizando la varaible 'resultado'
printf("El resultado de la suma es: %d \n", resultado);

}

// Definicion de la funcion tipo int con retorno (regresa un dato tipo int)
// Recibe dos datos como parametros
int suma(int x, int y){
// Declaracion de variable para guardar el resultado
int r = 0;
// suma de los dos valores
r = x + y;
// regresamos el valor de r para asignarlo a la variable resultado en el main()
return r;
}
