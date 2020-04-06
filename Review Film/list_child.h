#ifndef LIST_CHILD_H_INCLUDED
#define LIST_CHILD_H_INCLUDED


#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

typedef int infotype_child;
typedef struct elmlist_child *address_child;

struct elmlist_child {
    infotype_child info;
    address_child next;
};

struct List_child {
    address_child first;
};

void createList(List_child &L);
void insertLast(List_child &L, address_child P);
void deleteFirst(List_child &L, address_child &P);
void deleteLast(List_child &L, address_child &P);
void deleteElm(List_child &L, infotype_child x, address_child &P);
void printInfo(List_child L);

/** PERLU MODIFIKASI */
address_child alokasi_child(infotype_child x);

#endif // LIST_CHILD_H_INCLUDED
