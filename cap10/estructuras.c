#include <stdio.h>

struct carta {
    char *cara;
    char *palo;
};


int main(){
    struct carta unaCarta;
    struct carta *ptrCarta;

    unaCarta.cara = "As";
    unaCarta.palo = "Espadas";

    ptrCarta = &unaCarta;

    printf("%s%s%s\n%s%s%s\n%s%s%s\n", unaCarta.cara, " de " , unaCarta.palo,
    ptrCarta->cara, " de " , ptrCarta->palo,
    (*ptrCarta).cara, " de " , (*ptrCarta).palo);


    return 0;
}