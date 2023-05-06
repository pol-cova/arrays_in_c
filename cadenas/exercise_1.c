//
// Created by Paul Contreras on 04/05/23.
//
/*
 *
 */
// Add standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char cadena[]= {'H','o','l','a',' ','m','a','y','o',' ',
                    '\0','2','0','1','6'};
    char cadena1[]="Hola mayo 2016";
    char materia[100];

    // Case with puts
    puts(cadena);
    // Case with printf
    printf("\n%s\n", cadena);

    // Print second string
    puts(cadena1);

    /*
     * Elabore un código que construya el arreglo de carácteres que aparece en la Figura No.1,
     * denote el arreglo con el identificador cadena.

Figura 1. Arreglo de caracteres.

a) Una vez construído el arreglo cadena imprimalo en pantalla con la
     instrucción puts( ...) o con printf(...). ¿Qué sucedió?
     Pues se pauso en el null pointer "\0"

b) ¿Que sería necesario hacer para imprimir ¨Hola mayo 2016¨?.
     Poner el null pointer al final
     */

    system("pause");
    return 0;
}