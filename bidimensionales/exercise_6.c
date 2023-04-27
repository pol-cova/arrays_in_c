//
// Created by Paul Contreras on 27/04/23.
//
/*
 * Lea una matriz de tamaño NxM.
 * Calcule la suma de los elementos de una columna seleccionada por el usuario.
 */

// Add standard libraries
#include <stdio.h>
#include <stdlib.h>

int main(){

    // Declare the variables
    int n_vector, m_vector, user_column;

    // Main program
    printf("------------------------------\n");
    printf("|        BIENVENIDO          |\n");
    printf("------------------------------\n");
    printf("Este programa requiere un matriz de orden (NxM)\n");
    printf("Ingrese el numero de filas (N): ");
    scanf("%d", &n_vector);
    printf("Ingrese el numero de columnas (M): ");
    scanf("%d", &m_vector);
    printf("------------------------------\n");

    float user_vector[n_vector][m_vector], sum_of_column = 0;

    for (int i = 0; i < n_vector; i++){
        for (int j = 0; j < m_vector; j++){
            printf("Ingrese elemento en la matiz [%d][%d]: ",i+1,j+1);
            scanf("%f", &user_vector[i][j]);
        }
    }

    // Imprimimos la matriz
    printf("\nSu matriz es: \n");

    for (int i = 0; i < n_vector; i++){
        for (int j = 0; j < m_vector; j++){
            printf("%f \t", user_vector[i][j]);
        }
        printf("\n");
    }

    printf("\n Seleccione una de las columnas disponibles : %d \n", m_vector);
    scanf("%d", &user_column);
    user_column = user_column - 1;
    

    printf("\n Su columna selecciona fue: %d \n", user_column + 1);
    for (int i = 0; i < n_vector; i++){
        sum_of_column = sum_of_column + user_vector[i][user_column];
    }

    printf("\n La suma de los elementos de la columna seleccionada es: %f  ", sum_of_column);

    system("pause");
    return 0;
}