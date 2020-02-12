#include <stdbool.h>

typedef struct {//estrutura da lista sequencial
    int *vet;
    int ue;
    int max;
}ListaSeq;

ListaSeq * criaListaseq(int n);//função que cria uma lista sequencial

bool insere(ListaSeq *l, int v);//função que insere no final da lista sequencial

void sort_LS(ListaSeq *l);//ordenar em lista sequencial

void imprimirLS(ListaSeq *ls);

bool guardar_LS(ListaSeq *l);//printa no arquivo .txt os elementos presentes na lista


//Lista encadeada
typedef struct node{//no de uma lista encadeada
  int data;
  struct node *next;
}node;

typedef struct{//estrutura da lista encadeada
  node *begin;
  node *end;
  int size;
}ListaEnc;

void createList(ListaEnc *l);//função que cria a lista encadeada

void add(ListaEnc *l, int v);//função que insere no final da lista encadeada

void sort_LE(ListaEnc* l);//ordenar em lista encadeada

void imprimirLE(ListaEnc lista);

bool gera_arquivo_desordenado(int n);//gera um arquivo .txt com numeros aleatorios

bool gera_lista(ListaSeq *ls, ListaEnc *le, int n);//gera as duas listas com a mesma disposição de elementos

bool guardar_LE(ListaEnc l);//printa no arquivo .txt os elementos presentes na lista
