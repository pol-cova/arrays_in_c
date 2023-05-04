//
// Created by Paul Contreras on 04/05/23.
//
/*
 *  Dada dos matrices de números enteros, multiplíquelas.
 */

// All standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "SPANISH");
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



    if (m1_vector == n2_vector){
        int vector_one[n1_vector][m1_vector], vector_two[n2_vector][m2_vector], resultant_vector[m1_vector][n1_vector];
        printf("INGRESE VALORES PARA MATRIZ 1 DE ORDEN -> [%d][%d]: \n", n1_vector,m1_vector);

        for (int i = 0; i < n1_vector; i++){
            for (int j = 0; j<m1_vector; j++){
                printf("Ingrese elemento en la matiz [%d][%d]: ",i+1,j+1);
                scanf("%d", &vector_one[i][j]);
            }
        }

        printf("INGRESE VALORES PARA MATRIZ 2 DE ORDEN -> [%d][%d]: \n", n1_vector,m1_vector);

        for (int i = 0; i < n1_vector; i++){
            for (int j = 0; j<m1_vector; j++){
                printf("Ingrese elemento en la matiz [%d][%d]: ",i+1,j+1);
                scanf("%d", &vector_two[i][j]);
            }
        }


        // Multiplying matrices A and B and storing the result in C
        for (int i = 0; i < n1_vector; i++) {
            for (int j = 0; j < m2_vector; j++) {
                resultant_vector[i][j] = 0;
                for (int k = 0; k < m1_vector; k++) {
                    resultant_vector[i][j] += vector_one[i][k] * vector_two[k][j];
                }
            }
        }

        printf("El resultado de la multiplicación matricial es:\n");
        for (int i = 0; i < m1_vector; i++) {
            for (int j = 0; j < n2_vector; j++) {
                printf("%d ", resultant_vector[i][j]);
            }
            printf("\n");
        }
    } else{
        printf("La matrices no se pueden multiplicar");
    }



    return 0;
}

