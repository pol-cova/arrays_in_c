//
// Created by Paul Contreras on 04/05/23.
//
/*
 * Elabora un programa que lea una cadena y la imprima en orden inverso.
 */

// All standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "SPANISH");

    // Set counter in 0
    int counter = 0, nums_of_chars;
    char user_string[100];
    // Main program
    printf("------------------------------\n");
    printf("|        BIENVENIDO          |\n");
    printf("------------------------------\n");
    printf("Este programa imprime en inverso un texto!\n");
    printf("Ingrese el texto: ");
    gets(user_string);
    nums_of_chars = strlen(user_string);
    printf("\nTu texto original es: ");
    puts(user_string);
    printf("\nTu texto inverso es: ");

    for (int i = nums_of_chars-1; i  >= 0 ; i--){
        printf("%c", user_string[i]);
    }

    system("pause");
    return 0;
}
