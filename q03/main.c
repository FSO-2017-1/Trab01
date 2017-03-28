#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include "sort_list.h"
#include "core.h"
#include "io.h"
#include "sort.h"


int main(int argc, char *argv[]){
	int element;

	node *lista = (node *) malloc(sizeof(node));

	do{
		scanf("%d",&element );
		insertElement(lista,element, argv[1]);

		if(element == -1){
			exibeLista(lista, argv[1]);
		}

		}while(element != -1);
	return 0;



}
