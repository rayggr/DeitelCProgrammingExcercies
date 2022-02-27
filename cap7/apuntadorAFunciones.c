#include <stdio.h>
#define TAMANIO 10

void burbuja(int trabajo[], const int tamanio, int(*compara)(int a, int b));

int ascendente(int a, int b);
int descendente(int a, int b);

int main(){
    int orden;
    int contador;

    int a[TAMANIO] = {2,6,4,8,10,12,89,68,45,37};

    printf("Introduzca 1 para ordenar en forma ascendente,\n"
            "Introduzca 2 para odernar en forma descendente: ");

    scanf("%d", &orden);

    printf("\nElementos de datos en el orden original\n");

    for(contador = 0; contador <TAMANIO; contador++){
        printf("%5d", a[contador]);

    }

    if(orden == 1){
        burbuja(a,TAMANIO, ascendente);
        printf("\nElementos de datos en orden ascendente\n");
    }else {
        burbuja(a,TAMANIO,descendente);
        printf("\nElementos de datos en orden descendente\n");
    }

    for(contador = 0; contador < TAMANIO; contador++){
        printf("%5d", a[contador]);
    }  
    
    printf("\n");
    return 0;
}


void burbuja(int trabajo[], const int tamanio, int (*compara) (int a, int b)){
    int pasada;
    int cuenta;

    void intercambia( int *ptrElemento1, int *ptrElemento2);

    for(pasada = 1; pasada < tamanio; pasada++){
        for(cuenta = 0; cuenta < tamanio - 1; cuenta++){
            if((*compara)(trabajo[cuenta],trabajo[cuenta +1])){
                intercambia(&trabajo[cuenta], &trabajo[cuenta +1]);
            }
        }
    }
}

void intercambia(int *ptrElemento1, int *ptrElemento2){
    int almacena;
    almacena = *ptrElemento1;
    *ptrElemento1 = *ptrElemento2;
    *ptrElemento2 = almacena;
}

int ascendente(int a, int b){
    return b < a;
}
int descendente(int a, int b){
    return b > a;
}
