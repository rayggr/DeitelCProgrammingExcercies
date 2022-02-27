#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void baraja(int wMazo[][13]);
void reparte(const int wMazo[][13], const char *wCara[], const char *wPalo[]);

int main(){
    const char *palo[4] = {"Corazones","Diamantes","Treboles","Espadas"};
    const char *cara[13] =  {
        "As","Dos","Tres","Cuatro","Cinco",
        "Seis","Siete","Ocho","Nueve","Diez",
        "Joto","Quina","Rey"
    };

    int mazo[4][13] = {0};
    srand(time(0));
    baraja(mazo);
    reparte(mazo,cara,palo);
    return 0;

}

void baraja( int wMazo[][13]){
    int fila;
    int columna;
    int carta;

    for(carta = 1; carta <= 52; carta++){
        do{
            fila = rand() % 4; 
            columna = rand() % 13;
        } while(wMazo[fila][columna] != 0);
        wMazo[fila][columna] = carta;
    }
}

void reparte(const int wMazo[][13], const char *wCarta[], const char *wPalo[]){
    int carta; 
    int fila;
    int columna;

    for(carta = 1; carta <= 52; carta++){
        for(fila = 0; fila <= 3; fila++){
            for( columna = 0; columna <= 12; columna++){
                if(wMazo[fila][columna] == carta){
                    printf("%6s de %-9s%c",wCarta[columna], wPalo[fila], carta % 2 == 0 ? '\n': '\t');
                }
            }
        }
    }   
}