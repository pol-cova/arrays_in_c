//
// Created by Paul Contreras on 08/05/23.
//

#include "opencalc.h"
#include <math.h>
#include <stdio.h>

int main(){

    float hi;

    hi = height_3(26.53,10,M_PI/3,9.81);
    printf("Altura de lanzamiento  : %f segundos", hi);
    return 0;
}