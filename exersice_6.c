//
// Created by Paul Contreras on 26/04/23.
//
/*
 * Defina dos arreglos unidimensionales de tamaño N, súmelos y guarde el resultado de la suma en un tercer arreglo.
 * Imprima los valores de los tres arreglos.
 */

// Standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    // Set language
    setlocale(LC_CTYPE, "SPANISH");

    // Declare variable for the size of the vectors
    int size_of_vectors;

    // Main program
    printf("------------------------------\n");
    printf("|        BIENVENIDO          |\n");
    printf("------------------------------\n");
    printf("Ingrese el tamaño de los vectores: ");
    scanf("%d", &size_of_vectors);

    // Declare the arrays
    float vector_one[size_of_vectors], vector_two[size_of_vectors], vector_sum[size_of_vectors];

    // Insert values into vector one
    printf("Ingresa valores en el vector 1\n");
    for (int i=0; i<size_of_vectors; i++){
        printf("Valor: ");
        scanf("%f", &vector_one[i]);
    }
    // Insert values into vector two
    printf("\nIngresa valores en el vector 2\n");
    for (int i=0; i<size_of_vectors; i++){
        printf("Valor: ");
        scanf("%f", &vector_two[i]);
    }

    // Sum of vectors
    printf("La suma de 2 vectores de tamaño %d es:  ", size_of_vectors);
    for (int i=0; i<size_of_vectors; i++){
        vector_sum[i] = vector_one[i] + vector_two[i];
        printf(" %.f ",vector_sum[i]);
    }








    system("pause");
    return 0;
}