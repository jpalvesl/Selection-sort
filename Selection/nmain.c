#include <stdio.h>
#include "selection.h"
#include <stdbool.h>


int main() {
  int n = 0, op;//quantidade de elementos nas listas
  printf("Digite a quantidade de elementos presentes nas listas: ");
  scanf("%d", &n);

  ListaSeq *ls = criaListaseq(n); //criando lista sequencial
  ListaEnc le; 
  createList(&le); //criando lista encadeada


  gera_arquivo_desordenado(n);//gera o arquivo .txt com os numeros aleatorios
  gera_lista(ls,&le,n);//le o .txt e insere os numeros em ambas as listas 


  while (1){
    printf("\nQual lista deseja ordenar?\n");
    printf("---------------------------------------\n");
    printf("1 - Lista sequencial\n");
    printf("2 - Lista encadeada\n");
    printf("3 - Sair\n");
    scanf("%d", &op); getchar();

    if (op == 1){
      sort_LS(ls);//ordena a lista sequencial
      guardar_LS(ls);//guarda o conteudo presente na lista sequencial em um arquivo.txt
    }

    else if (op == 2){
    sort_LE(&le);// ordena a lista encadeada
    guardar_LE(le);//guarda o conteudo presente na lista encadeada em um arquivo.txt
    }

    else if (op == 3) break;

  }
  
  return true;
}

