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

![test](https://github.com/Seant-Dev/funcionesMelanie/blob/main/Captura%20de%20pantalla%202024-09-06%20092440.png)
