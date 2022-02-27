#include <stdio.h>

void iniciarArregloEstatico(void);
void iniciarArregloAutomatico();


int main(){


  printf("Primera llamada a cada función:\n");

  iniciarArregloEstatico();
  iniciarArregloAutomatico();

  printf("\n\nSegunda llamada a cada funcion");
  iniciarArregloEstatico();
  iniciarArregloAutomatico();

  return 0;
}


void iniciarArregloEstatico(void){
  static int arreglo[3]; //Inicializa automaticamente en 0 por ser iniciarArregloEstatico
  int i;

  printf("\nValores al entrar a iniciarArregloEstatico:\n");

  for(i = 0; i<=2; i++){
    printf("arreglo1[%d] = %d ",i,arreglo[i]);
  }

  printf("\nValores al salir del iniciarArregloEstatico:\n");

  for(i = 0; i<=2; i++){
    printf("Arreglo1 [%d] = %d " , i ,arreglo[i] += 5);
  }

}


void iniciarArregloAutomatico(void){
  int arreglo2[3] = {1,2,3};
  int i;
  printf("\nValores al iniciar de iniciarArregloAutomatico:\n");
  for(i = 0; i<=2; i++){
    printf("arreglo2 [%d] = %d " , i , arreglo2[i]);
  }

  printf("\nValores al salir de iniciarArregloAutomatico:\n");

  for(i = 0; i<=2; i++){
    printf("arreglo2 [%d] = %d ", i, arreglo2[i] += 5);
  }
}
