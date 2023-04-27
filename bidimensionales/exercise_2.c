//
// Created by Paul Contreras on 27/04/23.
//
/*
 * Lea dos matrices de tamaño NXM. Súmelas e imprima la matriz suma resultante.
 */

// Add standard libraries
#include <stdio.h>
#include <stdlib.h>

int main(){
    // Declare the variable for size of vectors
    int n1_vector, m1_vector, n2_vector, m2_vector;

    // Main program
    printf("------------------------------\n");
    printf("|        BIENVENIDO          |\n");
    printf("------------------------------\n");

    printf("Ingrese el orden (NxM) de la matriz 1: ");
    scanf("%d %d", &n1_vector, &m1_vector);
    printf("Ingrese el orden (NxM) de la matriz 2: ");
    scanf("%d %d", &n2_vector, &m2_vector);

    if (n1_vector && m1_vector == n2_vector && m2_vector){
        float vector_one[n1_vector][m1_vector], vector_two[n1_vector][m1_vector], vector_sum[n1_vector][m1_vector];

        printf("INGRESE VALORES PARA MATRIZ 1 DE ORDEN -> [%d][%d]: \n", n1_vector,m1_vector);

        for (int i = 0; i < n1_vector; i++){
            for (int j = 0; j<m1_vector; j++){
                printf("Ingrese elemento en la matiz [%d][%d]: ",i+1,j+1);
                scanf("%f", &vector_one[i][j]);
            }
        }

        printf("INGRESE VALORES PARA MATRIZ 2 DE ORDEN -> [%d][%d]: \n", n1_vector,m1_vector);

        for (int i = 0; i < n1_vector; i++){
            for (int j = 0; j<m1_vector; j++){
                printf("Ingrese elemento en la matiz [%d][%d]: ",i+1,j+1);
                scanf("%f", &vector_two[i][j]);
            }
        }

        // Suma de vectores
        for (int i = 0; i < n1_vector; i++){
            for (int j = 0; j<m1_vector; j++){
                vector_sum[i][j] = vector_one[i][j] + vector_two[i][j];
            }
        }

        // Imprimir matrices
        printf("\n");

        printf("Matriz 1 de orden (NxM) \n");

        for (int i = 0; i < n1_vector; i++){
            for (int j = 0; j<m1_vector; j++){
                printf("%.f \t", vector_one[i][j]);
            }
            printf("\n");
        }

        printf("\n");

        printf("Matriz 2 de orden (NxM) \n");

        for (int i = 0; i < n1_vector; i++){
            for (int j = 0; j<m1_vector; j++){
                printf("%.f \t", vector_two[i][j]);
            }
            printf("\n");
        }

        printf("\n");

        printf("Matriz suma (NxM) \n");

        for (int i = 0; i < n1_vector; i++){
            for (int j = 0; j<m1_vector; j++){
                printf("%.f \t", vector_sum[i][j]);
            }
            printf("\n");
        }







    }





    system("pause");
    return 0;
}