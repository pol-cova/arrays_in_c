//
// Created by Paul Contreras on 04/05/23.
//
/*
 * Elabore un programa que almacene en una matriz los nombres de los futbolistas del equipo ATLAS.
 */

// Add standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

    int num_of_players;
    setlocale(LC_CTYPE, "SPANISH");
    // Main program
    printf("------------------------------\n");
    printf("|        BIENVENIDO          |\n");
    printf("------------------------------\n");
    printf("Este programa imprime almacena el nombre de los jugadores del equipo ATLAS!\n");
    printf("Ingrese la cantidad de jugadores: ");
    scanf("%d", &num_of_players);
    char players[num_of_players][100];

    for (int i = 0; i<num_of_players; i++){
        printf("Ingrese el nombre del jugador: ");
        scanf("%s", players[i]);
        fflush(stdin);
    }

    // List of players
    printf("Los jugadores ingresados fueron: ");
    for (int i = 0; i<num_of_players; i++){
        printf("\n%s\n", players[i]);
    }

    system("pause");
    return 0;
}