#include <stdio.h>

int main(){
    int mivalor = 7;
    int* ptrInt = NULL;
    ptrInt = &mivalor;
    printf("La el apuntador es : %d" , *ptrInt);
    return 0;
}