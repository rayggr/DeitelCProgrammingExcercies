#include <stdio.h>
#include <stdlib.h>

int main(){

    const char *cadena = "51.2 son admitidos";
    double d;

    char *ptrCadena;

    d = strtod(cadena,&ptrCadena);

    printf("La cadena \"%s\" se convierte en \n", cadena);
    printf("un valor double %.2f y la cadena \"%s\" \n", d, ptrCadena);

    return 0;
}