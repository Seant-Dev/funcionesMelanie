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

La programación con funciones consiste básicamente en tomar una parte importante de nuestro código (Generalmente aquella que realiza una operación o un procedimiento) y ponerla dentro de otro subprograma (también llamado función) diferente a la función PRINCIPAL 'main()'
