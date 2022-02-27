#include <stdio.h>
#include <ctype.h>


void convierteAMayusculas(char *ptrS);

int main(){

    char cadena[] = "Caracteres y $32.98 para su cuenta por favor";
    printf("La cadena antes de la conversion es : %s", cadena);
    convierteAMayusculas(cadena);
    printf("\nLa cadena despues de la conversion es : %s\n", cadena);

    return 0;
}

void convierteAMayusculas(char *ptrS){
    while(*ptrS != '\0'){
        if(islower(*ptrS)){
            *ptrS = toupper(*ptrS);
        }
        ++ptrS;
    }
}