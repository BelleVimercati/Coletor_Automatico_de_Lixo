#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

heap* head = NULL; //início do heap

void* malloc2(int size){

    heap *no = (heap*)malloc(sizeof(heap));

    no->endereco = malloc(sizeof(size));
    no->flag = 1;
    no->prox = NULL;

    no->prox = head;
    head = no;

    return head->endereco;
}

void atrib2(void** pt1, void* pt2){
     
    heap *aux = head;

    while (aux != NULL){
        if(aux->endereco == *pt1)
            aux->flag -= 1;
        
        if(aux->endereco == pt2)
            aux->flag += 1;
        
        aux = aux->prox;

    }

   //*pt1 = pt2;

}

void clean(){

    heap *aux = head;
    heap *anterior;

    while (aux != NULL && aux->flag == 0){     //se for o primeiro na lista
        head = aux->prox;
        free(aux);
        aux = head;
    }

    while (aux != NULL){
        while (aux != NULL && aux->flag != 0){
            anterior = aux;
            aux = aux->prox;
        }

        if(aux == NULL)
            return;
        
        anterior->prox = aux->prox;
        free(aux);
        aux = anterior->prox;
    }
}

void PrintHeap(){
    heap *aux;

    if(head==NULL){
        printf("\nHeap está vazia\n");
        return;
    }else{
        aux = head;
        while(aux !=NULL){
            printf("....................\n");
            printf(": %d :              :\n",aux->flag);
            printf(":...:              :\n");
            printf(":                  :\n");
            printf(":                  :\n");
            printf(": %p        :\n",aux->endereco);
            printf("....................\n");

            aux=aux->prox;
        }
    }
}