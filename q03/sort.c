#include "core.h"


void insertCrescent(node *LISTA, int num)
{
    node *atual, *novo, *anterior;
    novo = (node *) malloc(sizeof(node));

     atual = LISTA;
     anterior = NULL;
     novo->num = num;

     if(atual == NULL){
         novo->prox = NULL;
         LISTA = novo;
     } else{
         while(atual != NULL && atual->num < num){
             anterior = atual;
             atual = atual->prox;
         }
         novo->prox = atual;
         if(anterior == NULL){
             LISTA = novo;
         } else{
             anterior->prox = novo;
         }
     }
}


void insereDecrescente(node *LISTA)
{

}

void libera(node *LISTA)
{

}
