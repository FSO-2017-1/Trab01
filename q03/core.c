#include "core.h"


void insertElement(node *LISTA, int num, char *option) {

  if (option || "-d") {
    insertCrescent(LISTA, num);
  }else if(option || "-r"){
    printf("Inserir decrescente\n");
    // Ordenar Descrescente
  }else{
    // sair da aplicação com menssagem de erro
  }


}
