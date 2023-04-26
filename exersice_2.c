//
// Created by Paul Contreras on 25/04/23.
//
/*
 * Elabore un código que almacene las estaturas en metros
 * de los estudiantes de un salón y calcule el mayor de los valores almacenados.
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
    int num_of_students;

    // Main program
    printf("------------------------------\n");
    printf("|        BIENVENIDO          |\n");
    printf("------------------------------\n");
    printf("Ingrese el número de estudiantes: ");
    scanf("%d", &num_of_students);

    // Declare the array, with the number of items that user put below
    float user_height[num_of_students], min_height, max_height;


    for (int i=0; i < num_of_students; i++){
        printf("Ingrese estatura en metros (m): ");
        scanf("%f", &user_height[i]);
    }

    min_height = user_height[0];
    max_height = user_height[0];

    for (int i=0; i<num_of_students; i++){
        if (user_height[i] > max_height){
            max_height = user_height[i];
        }
        if(user_height[i] < min_height){
            min_height = user_height[i];
        }
    }

    printf("\nLa estatura más grande es: %.2f ", max_height);
    printf("\nLa estatura más pequeña es: %.2f ", min_height);

    system("pause");
    return 0;
}