//
// Created by Paul Contreras on 26/04/23.
//
/*
 *  Elabore un programa en C que pida 10 letras mayúsculas al usuario,
 *  las convierta a minúsculas y posteriormente las imprima en pantalla.
 */

// Add standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
    // Set language
    setlocale(LC_CTYPE,"SPANISH");

    // Declare the array for convert characters
    char user_characters[10];

    // Main program
    printf("------------------------------\n");
    printf("|        BIENVENIDO          |\n");
    printf("------------------------------\n");
    for (int i=0; i<10; i++){
        printf("Ingrese un letra en Mayúscula: ");
        scanf(" %c", &user_characters[i]);
    }

    printf("Array original en mayúscula: ");
    for (int i=0; i<10; i++){
        printf(" %c ", user_characters[i]);
    }

    printf("\nArray convertido en minúscula: ");
    for (int i=0; i<10; i++){
        printf(" %c ", tolower(user_characters[i]));
    }

    system("pause");
    return 0;
}