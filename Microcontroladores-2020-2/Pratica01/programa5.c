#include <stdio.h>

int main(void) {
  int numero, resto;
  
  printf("Informe um numero inteiro:");
  scanf("%d" ,&numero);

  resto = numero % 2;

  if(resto == 0) {
    printf("Número par\n");
  } else {
    printf("Número ímpar\n");
  }

  printf("Fim do programa\n");

  return 0;
}
