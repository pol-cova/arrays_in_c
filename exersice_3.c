//
// Created by Paul Contreras on 25/04/23.
//
/*
 * Elabore un código que dado un arreglo de números enteros,
 * calcule la sumatoria y el producto de los elementos de dicho arreglo.
 */

// Add standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //Set language
    setlocale(LC_CTYPE, "SPANISH");

    // Declare main variables
    int num_of_items, sum = 0;
    double prod = 1;

    // Main program
    printf("------------------------------\n");
    printf("|        BIENVENIDO          |\n");
    printf("------------------------------\n");
    printf("Ingrese la cantidad de números enteros: ");
    scanf("%d", &num_of_items);

    // Declare the array
    int int_num_array[num_of_items];


    for (int i=0; i < num_of_items; i++){
        printf("Número entero: ");
        scanf("%d", &int_num_array[i]);
        sum = sum + int_num_array[i];
        prod = prod * int_num_array[i];
    }

    printf("La sumatoria total de %d números es = %d", num_of_items, sum);
    printf("\n El producto total de %d números es = %.0f", num_of_items, prod);

    system("pause");
    return 0;
}

