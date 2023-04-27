//
// Created by Paul Contreras on 27/04/23.
//
/*
 *  Lea una matriz de números flotantes y genere una nueva matriz,
 *  cuyos elementos son el resultado de multiplicar la matriz inicial
 *  por cierto escalar dado por un usuario.
 */

// Add standard libraries
#include <stdio.h>
#include <stdlib.h>

int main(){

    // Declare the variables
    int n_vector, m_vector;
    float user_scalar;

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
    printf("Ingrese el escalar a multiplicar la matriz: ");
    scanf("%f", &user_scalar);

    float original_vector[n_vector][m_vector], new_vector[n_vector][m_vector];

    for (int i = 0; i < n_vector; i++){
        for (int j = 0; j < m_vector; j++){
            printf("Ingrese elemento en la matiz [%d][%d]: ",i+1,j+1);
            scanf("%f", &original_vector[i][j]);
        }
    }

    // Multiply the original array with the new array
    for (int i = 0; i < n_vector; i++){
        for (int j = 0; j < m_vector; j++){
            new_vector[i][j]  = original_vector[i][j] * user_scalar;
        }
    }

    // Print the arrays
    // Imprimimos la matriz
    printf("\nSu matriz original es: \n");


    for (int i = 0; i < n_vector; i++){
        for (int j = 0; j<m_vector; j++){
            printf("%f \t", original_vector[i][j]);
        }
        printf("\n");
    }


    printf("\nSu matriz multiplicada por %f es: \n", user_scalar);


    for (int i = 0; i < n_vector; i++){
        for (int j = 0; j<m_vector; j++){
            printf("%f \t", new_vector[i][j]);
        }
        printf("\n");
    }



    system("pause");
    return 0;
}