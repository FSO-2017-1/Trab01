#include "core.h"


void insereCrescente(node *LISTA)
{


}
void insereDecrescente(node *LISTA)
{

}

void libera(node *LISTA)
{

}

node *aloca()
{
	node *novo=(node *) malloc(sizeof(node));
	if(!novo){
		printf("Sem memoria disponivel!\n");
		exit(1);
	}else{
		printf("Novo elemento: "); scanf("%d", &novo->num);
		return novo;
	}
}
