//
// Created by Paul Contreras on 27/04/23.
//
/*
 * Lea una matriz de tamaño NXM y calcule el valor mayor de toda ella.
 */

// Add libraries standard
#include <stdio.h>
#include <stdlib.h>

int main(){

    // Declare the variables
    int n_vector, m_vector;

    // Main program
    printf("------------------------------\n");
    printf("|        BIENVENIDO          |\n");
    printf("------------------------------\n");
    printf("Este programa requiere un matriz de orden (NxM)\n");
    printf("Ingrese el numero de filas (N): ");
    scanf("%d", &n_vector);
    printf("Ingrese el numero de columnas (M): ");
    scanf("%d", &m_vector);

    float vector[n_vector][m_vector], max_val, min_val;

    for (int i = 0; i < n_vector; i++){
        for (int j = 0; j<m_vector; j++){
            printf("Ingrese elemento en la matiz [%d][%d]: ",i+1,j+1);
            scanf("%f", &vector[i][j]);
        }
    }
    // Initialize the flag variables
    max_val = min_val = vector[0][0];

    printf("\nSu matriz es: \n");


    for (int i = 0; i < n_vector; i++){
        for (int j = 0; j<m_vector; j++){
            printf("%.f \t", vector[i][j]);
        }
        printf("\n");
    }

    // Find the highest value
    for (int i = 0; i < n_vector; i++) {
        for (int j = 0; j < m_vector; j++){
            if (vector[i][j] > max_val){
                max_val = vector[i][j];
            }
            if (vector[i][j] < min_val){
                min_val = vector[i][j];
            }
        }
    }

    // Print the results
    printf("\nEl valor más grande de la matriz es: %.f", max_val);
    printf("\nEl valor más pequeño de la matriz es: %.f", min_val);

    system("pause");
    return 0;
}