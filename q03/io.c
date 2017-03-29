#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "io.h"

void exibeLista(node *LISTA, char *option)
{
  if (strcmp(option,"-d")==0) {
    printf("Saída crescente:\n");
    printList(LISTA);
  }
  else if(strcmp(option,"-r")==0){
    printf("Saída decrescente:\n");
    printList(LISTA);
  }
}

void printList(node *LISTA)
{
  while(LISTA != NULL)
  {
      printf(" %d ", LISTA->num);
      LISTA = LISTA->prox;
  }
  printf("\n");
}
