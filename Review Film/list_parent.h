#ifndef LIST_PARENT_H_INCLUDED
#define LIST_PARENT_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

typedef int infotype_parent;
typedef struct elmlist_parent *address_parent;

struct elmlist_parent {
    infotype_parent info;
    address_parent next;
};

struct List_parent {
    address_parent first;
};

void createList(List_parent &L);
void insertLast(List_parent &L, address_parent P);
void deleteFirst(List_parent &L, address_parent &P);
void deleteLast(List_parent &L, address_parent &P);
void deleteElm(List_parent &L, infotype_parent x, address_parent &P);
void printInfo(List_parent L);

/** PERLU MODIFIKASI */
address_parent alokasi_parent(infotype_parent x);


#endif // LIST_PARENT_H_INCLUDED
