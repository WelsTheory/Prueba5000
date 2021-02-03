/*
 * File:   Programa_principal.c
 * Author: Wels
 *
 * Created on 1 de febrero de 2021, 08:25 PM
 */

#include <xc.h>
#include <stdint.h>
#include "Configuracion.h"
#include "Interrupciones.h"

extern uint8_t x;

/*
#include <stdint.h>
int8_t -> int 8 bits = -127 +127
uint8_t -> unsigned int 8 bits -> 0 al 255

int -> 16 bits

microcontrolador 16 bits
int -> 32 bits*/


void main(void) {
    Int_Init();
    TRISD = 0x00;
    LATD = 0x00;
    while(1){
        if(x == 1){
            LATD = 0xAA;
        }
        if(x == 2){
            LATD = 0x55;
        }
    }    
    return;
}
