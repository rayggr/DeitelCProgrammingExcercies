#include <stdio.h>

void funcion1(int a);
void funcion2(int b);
void funcion3(int c);

int main(){
    void (*f[3])(int) = {funcion1,funcion2,funcion3};

    int eleccion; 
    printf("Introduzca un numero entre 0 y 2 , 3 para terminar: ");
    scanf("%d",&eleccion);

    while(eleccion >= 0 && eleccion < 3) {
        (*f[eleccion])(eleccion);
        printf("Introduzca un numero entre 0 y 2 , 3 para terminar: ");
        scanf("%d",&eleccion);
    }

    printf("Termina la ejecucion del programa.\n");
    return 0;
}

void funcion1(int a){
    printf("Usted introdujo %d de manera que invoco a la funcion1\n",a);
}
void funcion2(int b){
    printf("Usted introdujo %d de manera que invoco a la funcion2\n",b);
}
void funcion3(int c){
    printf("Usted introdujo %d de manera que invoco a la funcion2\n",c);
}

