//
// Created by Paul Contreras on 05/05/23.
//
/*
 * Intenta elaborar un código que almacene en un arreglo las calificaciones de un estudiante
 * y luego las imprima.
 */

// Add standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    // Set the language
    setlocale(LC_CTYPE, "SPANISH");

    // Declare the main variables to work

    // This variable is for the user, here the user introduce how much items are saved on the array.
    int num_of_cal;

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
    }

    // Print all the califications
    printf("\nLista total de calificaciones ingresadas!\n");
    for (int i=0; i<num_of_cal; i++){
        printf("\nCalificación número[%d]: %f", i+1, user_cal[i]);
    }

    system("pause");
    return 0;
}