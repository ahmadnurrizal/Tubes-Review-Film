#include "list_child.h"

void createList(List_child &L) {
    first(L) = NULL;
}

address_child alokasi_child(infotype_child x) {
    address_child P;
    P = new elmlist_child;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insertLast(List_child &L, address_child P) {
    if (first(L)==NULL) {
        first(L)=P;
    } else {
        address_child Q=first(L);
        while (next(Q)!=NULL){
            Q=next(Q);
        }
        next(Q)=P;
    }
}

void deleteFirst(List_child &L, address_child &P){
    if (first(L)==NULL) {
        cout<<"List is Empty"<<endl;
    } else {
        P=first(L);
        if (next(first(L))==NULL) {
            first(L)=NULL;
        } else {
            first(L)=next(P);
            next(P)=NULL;
        }
    }
}
void deleteLast(List_child &L, address_child &P){
    if (first(L)==NULL) {
        cout<<"List is Empty"<<endl;
    } else {
        if (next(first(L))==NULL){
            P=first(L);
            first(L)=NULL;
        } else {
            address_child Q=first(L);
            while (next(next(Q))!=NULL) {
                Q=next(Q);
            }
            P=next(Q);
            next(Q)=NULL;
        }
    }
}
void deleteElm(List_child &L,infotype_child x, address_child &P){
    address_child Q=first(L);
    if (Q!=NULL) { //checking list is empty or not
        if (info(Q)==x){
            deleteFirst(L,P);
        } else {
            while (next(Q)!=NULL&&info(next(Q))!=x) { // looking for prec
                Q=next(Q);
            }
            if (next(Q)==NULL){
                cout<<"Data not Found"<<endl;
            } else {
                if (next(next(Q))==NULL){
                    deleteLast(L,P);
                } else if (info(next(Q))==x) {
                    P=next(Q);
                    next(Q)=next(P);
                    next(P)=NULL;
                }
            }
        }
    } else {
        cout<<"List is Empty"<<endl;
    }
}

void printInfo(List_child L) {
    address_child Q = first(L);

    if (first(L)==NULL) {
        cout<<"List is Empty";
    } else {
        while (Q!=NULL) {
            cout<<info(Q)<<" ";
            Q=next(Q);
        }
    }
    cout<<endl;
}

address_child findElm(List_child L, infotype_child x) {
    address_child Q=first(L);
    while (Q!=NULL&&info(Q)!=x) {
        Q=next(Q);
    }
    return Q;
}
