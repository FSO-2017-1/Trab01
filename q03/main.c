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

	do{

		scanf("%d",&element );
		if (element>=0) {
			insertElement(lista,element, argv[1]);
		}else{
			printf("Informe um inteiro positivo \n" );	
		}



		if(element == -1){
				exibeLista(lista->prox, argv[1]);
			}else{


			}
		}while(element != -1);

	return 0;



}
