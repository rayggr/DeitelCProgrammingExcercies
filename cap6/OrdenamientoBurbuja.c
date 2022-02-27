#include <stdio.h>
#define TAMANIO 10

int main()
{
    int a[TAMANIO] = {2,6,4,8,10,12,89,68,45,37};
    
    int i;

    printf("Elemetnos de datos en el orden original\n");

    for(i = 0; i < TAMANIO; i++){
        printf("%4d",a[i]);
    }

    ordenaMBurbuja(a,TAMANIO);

    printf("\nElementos de datos en orden ascendente");

    for(i=0; i<TAMANIO; i++){
        printf("%4d",a[i]);
    }
    printf("\n");
    return 0;
}

void ordenaMBurbuja(int * const arreglo, const int tamanio){
    void intercambia(int *ptrElemento1, int *ptrElemento2);

    int pasada;
    int j;


    for(pasada = 0; pasada < tamanio -1; pasada++){
        for(j = 0; j < tamanio -1 ; j++){
            if( arreglo[j] > arreglo[j+1]){
                intercambia(&arreglo[j], &arreglo[j+1]);
            }
        }
    }
}

void intercambia(int *ptrElemento1, int *ptrElemento2){
    int almacena = *ptrElemento1;
    *ptrElemento1 = *ptrElemento2;
    *ptrElemento2 = almacena;
}
