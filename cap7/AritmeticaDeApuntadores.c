#include <stdio.h>

int main(){
    int b[] = {10,20,30,40,50,60};
    int *ptrB = b;  // Equivalente a &b[0];
    int i;
    int desplazamiento;

    printf("Arreglo b impreso con:\nNotacion de subindices de arreglos\n");
    for(i = 0; i < 6; i++){
        printf("b[%d] = %d\n", i , b[i]);
    }

    printf("\nNotacion apuntador/desplazamiento donde\n"
            "el apuntador es el nombre del arreglo\n");

    for(desplazamiento = 0; desplazamiento < 6; desplazamiento++){
        printf("*(b + %d ) = %d\n",desplazamiento, *(b + desplazamiento));
    }

    printf("\nNotacion de subindices de arreglos\n");

    for(i = 0; i < 6; i++){
        printf("ptrB [%d] = %d\n", i, ptrB[i]);
    }

    printf("\nNotacion aputnador desplazamiento\n");

    for(desplazamiento = 0; desplazamiento < 6 ; desplazamiento++){
        printf("*(ptrB + %d ) = %d\n", desplazamiento, *(ptrB + desplazamiento));
    }

    return 0;
}