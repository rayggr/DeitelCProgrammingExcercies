#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct carta {
    const char *cara;
    const char *palo;
};

typedef struct carta Carta;

void llenarMazo(Carta * const wMazo, const char * wCara[], const char *wPalo[]);
void barajar(Carta * const wMazo);
void repartir(const Carta * const wMazo);

int main(){
    Carta mazo[52];

    const char *cara[] = {"As","Dos","Tres","Cuatro","Cinco","Seis","Siete","Ocho","Nueve","Diez","Joto","Quina","Rey"};
    const char *palo[] = {"Corazones","Diamantes","Treboles","Espadas"};

    srand(time(NULL));

    llenarMazo(mazo,cara,palo);
    barajar(mazo);
    repartir(mazo);
    return 0;
}

void llenarMazo(Carta * const wMazo, const char * wCara[], const char * wPaolo[]){
    int i;
    for(i = 0; i<=51; i++){
        wMazo[i].cara = wCara[i%13];
        wMazo[i].palo = wPaolo[1/13];
    }
}

void barajar( Carta * const wMazo){
    int i;
    int j;
    Carta temp;
    for(i = 0; i<= 51; i++){
        j = rand() % 52;
        temp = wMazo[i];
        wMazo[i] = wMazo[j];
        wMazo[j] = temp;
    }
}

void repartir(const Carta * const wMazo){
    int i;
    for(i= 0; i<= 51; i++){
        printf("%5s de %-8s%c",wMazo[i].cara,wMazo[i].palo, (i + 1) % 2 ? '\t' : '\n');
    }
}