//
// Created by Paul Contreras on 27/04/23.
//
/*
 *  Calcule la traza de una matriz de tamaño NXN.
 */

// Add standard libraries
#include <stdio.h>
#include <stdlib.h>

int main(){

    // Declare the variables
    int n_vector;

    // Main program
    printf("------------------------------\n");
    printf("|        BIENVENIDO          |\n");
    printf("------------------------------\n");
    printf("Este programa requiere un matriz de orden (NxN)\n");
    printf("Ingrese el numero de filas y columnas (N): ");
    scanf("%d", &n_vector);

    float vector[n_vector][n_vector], sum = 0;

    for (int i = 0; i < n_vector; i++){
        for (int j = 0; j<n_vector; j++){
            printf("Ingrese elemento en la matiz [%d][%d]: ",i+1,j+1);
            scanf("%f", &vector[i][j]);
        }
    }

    // Imprimimos la matriz
    printf("\nSu matriz es: \n");


    for (int i = 0; i < n_vector; i++){
        for (int j = 0; j<n_vector; j++){
            printf("%.f \t", vector[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n_vector; i++){
        sum = sum + vector[i][i];
    }


    printf("\n La suma de la traza es: %f ", sum);

    system("pause");
    return 0;
}