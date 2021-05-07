#include <stdio.h>
#include <stdlib.h>
//O aluno deve adicionar no comentário seu nome completo.
typedef struct sCell{
    int info;
    struct sCell *next;
}CELULA;

typedef struct fila{
    CELULA *inicio;
    CELULA *fim;
}FILA;

//na função principal

void inicializar (FILA* f){
    f->inicio = NULL;
    f->fim = NULL;
}

int filaVazia(FILA *f){
    if(f->inicio == NULL)
        return 1;
    return 0;
}

CELULA* criar(){
    return (CELULA*) malloc (sizeof(CELULA));
}

int enfileirar(FILA *f, int elemento){
    CELULA *nova = criar();
    nova->next = NULL;
    nova->info = elemento;
    if(filaVazia(f)){
        f->inicio = nova;
        f->fim = nova;
        return 1; //inseriu
    }
    f->fim->next = nova;
    return 1;
}

int desenfileirar(FILA *f){
    int dadoRemovido = -1;
    CELULA *endRemovida;
    if(filaVazia(f)){
        printf("\nFila Vazia!");
        return dadoRemovido;
    }
    endRemovida = f->inicio;
    dadoRemovido = f->inicio->info;
    f->inicio = f->inicio->next;
    free(endRemovida);
    return dadoRemovido;
}

void imprimeInicio(FILA *f){
    if(filaVazia(f)){
        printf("\nFila Vazia!");
    }else{
    printf("\n%d ", f->inicio->info) ;
    }
}

int main(){

    FILA fi;
    //testes
//    inicializar(&fi);
//    imprimeInicio(&fi);
//    enfileirar(&fi, 1);
//    imprimeInicio(&fi);
//    enfileirar(&fi, 2);
//    imprimeInicio(&fi);
//    desenfileirar(&fi);
//    imprimeInicio(&fi);
//    desenfileirar(&fi);
//    imprimeInicio(&fi);
//    enfileirar(&fi, 2);
//    imprimeInicio(&fi);

    //CRIAR UM MENU PARA FUNCIONALIDADES E TESTES AVANÇADOS

    return 0;
}


