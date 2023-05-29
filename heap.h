#ifndef HEAP_H_INCLUDED
#define HEAP_H_INCLUDED

typedef struct heap{
    void* endereco;
    int flag;
    struct heap* prox;
}heap;

extern heap* head;

void* malloc2( int size );

void atrib2(void ** p1, void* p2);

void clean();

void PrintHeap();

#endif /* HEAP_H_INCLUDED */