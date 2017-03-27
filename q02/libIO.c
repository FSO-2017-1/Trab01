#include <stdio.h>

void print_args(char **argv,int total){

  for (int i = 1; i < total; ++i)
    {
        printf("Paramêtro #%d : %s\n", i, argv[i]);
    }
}
void print_total_args(int argc){
  printf("# de parametros: %d\n",argc );
}

void print_name_program(char **argv){
  char *name_program = argv[0];
  name_program += 2;
  printf("Nome do executável '%s'\n", name_program );
}
