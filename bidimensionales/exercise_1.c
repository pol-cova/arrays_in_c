//
// Created by Paul Contreras on 27/04/23.
//

/*
 * Genere una matriz de 3 filas y 4 columnas. Los valores de la matriz son enteros.
 */

// Add standard libraries
#include <stdio.h>
#include <stdlib.h>

int main(){

    // Declare the array
    int matrix[3][4];

    // Main program
    printf("------------------------------\n");
    printf("|        BIENVENIDO          |\n");
    printf("------------------------------\n");

    /* This for is for introduce values into matrix with the form ab -> matrix[a][b]
     * a and b is the position in the matrix
     */
    for (int i = 0; i < 3; i++){
        for (int j = 0; j<4; j++){
            printf("Ingrese elemento en la matiz [%d][%d]: ",i+1,j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < 3; i++){
        for (int j = 0; j<4; j++){
            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}