#include "core.h"
#define HIGH = 10000000;

void insertElement(node *LISTA, int num, char *option) {

  if (strcmp(option, "-d")==0){
    insertCrescent(LISTA, num);
  }else if(strcmp(option, "-r")==0){
    LISTA->num = 100000;
    insertDecrescent(LISTA, num);
  }else{
    // sair da aplicação com menssagem de erro
  }


}
