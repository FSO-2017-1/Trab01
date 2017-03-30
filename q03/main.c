#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include "sort_list.h"
#include "core.h"
#include "io.h"
#include "sort.h"


int main(int argc, char *argv[]){
	int element;

	node *lista =  malloc(sizeof(node));
	char *option = argv[1];

	if (option== NULL) {
		option = "-d";
	}

	do{

		scanf("%d",&element );
		if(element == -1){
			exibeLista(lista->prox, option);
			return 0;
		}

		if (element>=0) {
			insertElement(lista,element, option);
		}else{
			printf("Informe um inteiro positivo \n" );
		}

		}while(element != -1);

	return 0;

}
