#ifndef __ILIST_H__
#define __ILIST_H__

typedef struct INOH
{
    int chave;
    int valor;
    int ocupado;
}INOH;

typedef struct ILIST
{
    INOH *nos;
    int max;
    int tam;
    int alloc;
    int alloc_step;
}ILIST;

ILIST* ILIST_Criar(int alloc_step);
int ILIST_Inserir(ILIST *L, int chave, int valor);
int ILIST_Remover(ILIST *L, int chave);
int ILIST_Buscar(ILIST *L, int chave);
INOH* ILIST_Endereco(ILIST* L, int pos);

#endif