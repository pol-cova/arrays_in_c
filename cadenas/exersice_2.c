//
// Created by Paul Contreras on 04/05/23.
//

/*
 * Elabore un programa, que cuente la ocurrencia de la vocal 'a', en la siguiente cadena:

    ¨Curso de Programación de Computadoras¨
 */

// All standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "SPANISH");

    // Set counter in 0
    int counter = 0;
    char user_string[100];
    // Main program
    printf("------------------------------\n");
    printf("|        BIENVENIDO          |\n");
    printf("------------------------------\n");
    printf("Este programa busca la letra a en un texto!\n");
    printf("Ingrese el texto: ");
    gets(user_string);
    printf("\nTu texto es: ");
    puts(user_string);
    for (int i=0; i< strlen(user_string) ; i++){
        if (user_string[i] == 'a'){
            counter++;
        }
    }

    printf("\nEste texto contiene:  %d letras 'a' \n", counter);

    system("pause");
    return 0;
}
