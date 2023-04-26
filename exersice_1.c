//
// Created by Paul Contreras on 25/04/23.
//
/*
 * Elabore un programa que lea las calificaciones de un estudiante en un arreglo,
 * calcule el promedio de las mismas y lo imprima.
 */

// Add the standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    // Set the language
    setlocale(LC_CTYPE, "SPANISH");

    // Declare the main variables to work

    // This variable is for the user, here the user introduce how much items are saved on the array.
    int num_of_cal;
    // This variable is for sum all items.
    float suma = 0, prom_of_cal;

    // Main program
    printf("------------------------------\n");
    printf("|        BIENVENIDO          |\n");
    printf("------------------------------\n");
    printf("Cuantas calificaciones deseas ingresar al sistema: ");
    scanf("%d", &num_of_cal);

    // Declare the array, with the number of items that user put below
    float user_cal[num_of_cal];

    // I use a for to add, each user cal to array
    for (int i=0; i<num_of_cal; i++){
        printf("Ingrese una calificación: ");
        scanf("%f", &user_cal[i]);
        // This part sum each value of the array
        suma = suma + user_cal[i];
    }

    // Calculate average cal
    prom_of_cal = suma/num_of_cal;
    printf("\nEl promedio final de %d calificaciones es: %f", num_of_cal, prom_of_cal);


    system("pause");
    return 0;
}
