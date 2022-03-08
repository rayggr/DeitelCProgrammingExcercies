#include <stdio.h>
#include <ctype.h>

int main(){
    printf("%s\n%s%s\n%s%s\n\n\a","De acuerdo con is digit: ",
    isdigit('8') ? "8 es un ": "8 no es un","digito",
    isdigit('#') ? "# es un":"# no es un ", "digito");

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
            "De acuerdo con is alpha: ",
            isalpha('A') ? "A es una": "A no es una", "letra",
            isalpha('b') ? "b es una": "b no es una", "letra",
            isalpha('&') ? "& es una": "& no es una", "letra",
            isalpha('4') ? "4 es una": "4 no es una", "letra");

    printf("%s\n%s%s\n%s%s\n%s%s\n\n",
            "De acuerdo con isalnum:",
            isalnum('A') ? "A es un ": "A no es un ","digito o una letra",
            isalnum('8') ? "8 es un ": "8 no es un ","digito o una letra",
            isalnum('#') ? "# es un ": "# no es un ","digito o una letra");

    return 0;
}