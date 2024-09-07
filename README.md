# Aclaración de dudas para Melanie
Cómo se vio durante la primera parte del curso de programación estructurada, los programas escritos en lenguaje C siempre tienen una función PRINCIPAL llamada 'main()' que es básicamente aquella en donde comúnmente escribimos todo el código que realiza el funcionamiento de cada uno de nuestros programas.

El siguiente es un ejemplo de programa escrito en lenguaje C que pide al usuario dos números enteros para sumarlos y mostrar su resultado en pantalla:

```c
#include <stdio.h>

// Funcion principal del programa
main(){

// Declaracion de variables
int x, y, resultado;

// Lectura de datos
printf("Ingresa el valor de x: ");
scanf("%d", &x);
printf("Ingresa el valor de y: ");
scanf("%d", &y);

resultado = x + y;

//Imprimimos el resultado de nuestra suma utilizando la varaible 'resultado'
printf("El resultado de la suma es: %d \n", resultado);

}
```
A continuación se muestra la compilación y ejecución del programa al cual llamamos suma.c y su comando para compilar sería.
```
gcc suma.c -o suma
```

![Ejecución suma](https://github.com/Seant-Dev/funcionesMelanie/blob/main/Captura%20de%20pantalla%202024-09-06%20092440.png)

Cómo se vio en el programa anterior su funcionamiento es correcto, pero a medida que los programas crecen en complejidad, por ejemplo si quisiéramos hacer la suma de 10 pares de números enteros o de 100 pares de números enteros tendríamos que reescribir todas las líneas que hacen la suma y declarar variables suficientes para eso, o en el mejor de los casos poner todo de un ciclo que se repita las veces que sean necesarias, es aquí en donde entra en juego el papel de la programación con funciones.

La programación con funciones consiste básicamente en tomar una parte importante de nuestro código (Generalmente aquella que realiza una operación o un procedimiento) y ponerla dentro de otro subprograma (también llamado función) diferente a la función PRINCIPAL 'main()', esto se hace con distintas finalidades pero generalmente se emplea cuando tratamos de tener un código más fácil de entender, más fácil de mantener y cuando una operación se va a utilizar más de una vez.

A continuación se presenta un código que hace lo mismo que el primero presentado, pero con la diferencia de que utiliza una función llamada suma(), llegado aquí es importante aclarar que el nombre de las funciones se queda a elección del programador, generalmente es posible asignar cualquier nombre siempre y cuando no sea una palabra reservada del lenguaje C, pero también se recomienda darle un nombre acordé a el funcionamiento que realizará.

```c
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
```

la instruccion para compilar este codigo en el servidor unix de la UAM es la siguiente:

```
gcc sumaFuncion.c -o sumaFuncion
```

La ejecucion del programa es la siguiente, como se puede observar funciona de igual manera que el primer programa que realiza la suma, con diferencias en su estructura:

![Ejecución sumaFuncion](https://github.com/Seant-Dev/funcionesMelanie/blob/main/Captura%20de%20pantalla%202024-09-06%20091754.png)

Por ultimo como ejemplo tenemos este otro codigo que realiza el promedio de distintas calificaciones por medio de funciones, si analizamos el codigo con detenimineto podemos notar que dentro de la funcion PRINCIPAL unicamente se solicita el numero de calificaciones que seran ingresadas, fuera de eso el proceso de pedir calificaciones y obtener el promedio general se realiza por medio de una funcion llamada promedio(int n) que como unico parametro recibe el valor 'n' que fue el proporcionado por el usuario dentro de la funcion main().

```c
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
```

igualmente para compilar el codigo tenemos las siguientes instrucciones que se ejecutan en el servidor unix de la UAM

```
gcc promedioFuncion.c -o promedioFuncion
```

y su ejecucion seria la siguiente:

![Ejecución promedioFuncion](https://github.com/Seant-Dev/funcionesMelanie/blob/main/Captura%20de%20pantalla%202024-09-06%20091851.png)
