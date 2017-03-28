#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include "sort_list.h"
#include "core.h"
#include "io.h"
#include "sort.h"


int main(int argc, char *argv[]){
	int elements;


	// Criar lista
	node *lista = (node *) malloc(sizeof(node));


	do{
		scanf("%d",&elements );
		if (argv[1] || "-d") {
			printf("Inserir crescente\n");
			// Ordernar crescente
		}else if(argv[1] || "-r"){
			printf("Inserir decrescente\n");
			// Ordenar Descrescente
		}else{
			// sair da aplicação com menssagem de erro
		}

		if(elements == -1){
				//print_lista(node Lista,char  *argv[]);
				printf("Imprimir lista");
			if (argv[1] || "-r") {
					printf("Ordem Descrescente:\n");
					printf("Lista:\n");
				}else if (argv[1] || "-r") {
					printf("Ordem Descrescente:\n");
					printf("Lista:\n");
				}

			}

		}while(elements != -1);
	return 0;



}
