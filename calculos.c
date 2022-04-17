/*
 * calculos.c
 *
 *  Created on: 16 abr. 2022
 *      Author: JUAN
 */
#include "calculos.h"


float descuentoAero (float descuentoA){
        float calc;
        calc = (descuentoA * 0.9);

        return calc;
    }
float descuentoLatam (float descuentoL){
        float calc;
        calc = (descuentoL * 0.9);

        return calc;
    }


float interesAero (float interesA){
        float calc;
        calc = (interesA * 1.25);

        return calc;
    }
float interesLatam (float interesL){
        float calc;
        calc = (interesL * 1.25);

        return calc;
    }
float btcAero (float p, float b){
    float calc;
        calc = (p / b);

        return calc;

}
float btcLatam (float r, float b){
    float calc;
        calc = (r / b);

        return calc;

}

float unitA (float f, float g){
    float calc;
        calc = (f / g);

        return calc;

}
float unitL (float f, float g){
    float calc;
        calc = (f / g);

        return calc;
}

float diferencia (float L, float A){
float calc;
        calc = (L - A);

        return calc;
}


