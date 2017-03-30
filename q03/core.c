#include "core.h"

const int HIGH = 100000000;

void insertElement(node *LISTA, int num, char *option) {

  if (strcmp(option, "-d")==0){
    insertCrescent(LISTA, num);
  }else if(strcmp(option, "-r")==0){
    LISTA->num = HIGH;
    insertDecrescent(LISTA, num);
  }


}
