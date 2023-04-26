//
// Created by Paul Contreras on 26/04/23.
//
/*
 * Genere una arreglo de caracteres, cuyos elementos son las letras del alfabeto inglés en minúsculas. A partir de este
 * arreglo genere otro, cuyos elementos se almacenen en él en orden reverso respecto al primer arreglo.
 */

// Add standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    // Declare the arrays
    char eng_alphabet[26] = {'a', 'b', 'c','d', 'e', 'f',
                             'g', 'h', 'i', 'j', 'k','l',
                             'm', 'n', 'o', 'p', 'q', 'r',
                             's', 't', 'u', 'v', 'w', 'x',
                             'y', 'z'}, inv_eng_alphabet[26];

    for (int i=0; i<26; i++){
        inv_eng_alphabet[i] = eng_alphabet[26-i-1];
    }

    printf("\nAlfabeto ingles orden normal! \n");
    for (int i=0; i<26; i++){
        printf(" %c ", eng_alphabet[i]);
    }

    printf("\nAlfabeto ingles orden reverso! \n");
    for (int i=0; i<26; i++){
        printf(" %c ", inv_eng_alphabet[i]);
    }

    system("pause");
    return 0;
}