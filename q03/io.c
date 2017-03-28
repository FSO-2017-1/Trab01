#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "io.h"

void exibeLista(node *LISTA, char *option)
{
  if (option || "-d" ) {
    printf("Saída crescente:\n");
    printList(LISTA);
  }
  else if(option || "-r"){
    printf("Saída decrescente:\n");
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
