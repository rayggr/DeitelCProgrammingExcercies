#include <stdio.h>

void imprimirCaracteres(const char *ptrS);

int main(){

    char cadena[] = "imprime los caracteres de una cadena";
    printf("La cadena es :\n");
    imprimirCaracteres(cadena);
    printf("\n");
    return 0;
}

void imprimirCaracteres(const char *ptrS){
    for(; *ptrS != '\0'; ptrS++){
        printf("%c",*ptrS);
    }
}
