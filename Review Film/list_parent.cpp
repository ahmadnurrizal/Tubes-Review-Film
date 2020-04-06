#include "list_parent.h"

void createList(List_parent &L) {
    first(L) = NULL;
}

address_parent alokasi_parent(infotype_parent x) {
    address_parent P;
    P = new elmlist_parent;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insertLast(List_parent &L, address_parent P) {
    if (first(L)==NULL) {
        first(L)=P;
    } else {
        address_parent Q=first(L);
        while (next(Q)!=NULL){
            Q=next(Q);
        }
        next(Q)=P;
    }
}

void deleteFirst(List_parent &L, address_parent &P){
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
void deleteLast(List_parent &L, address_parent &P){
    if (first(L)==NULL) {
        cout<<"List is Empty"<<endl;
    } else {
        if (next(first(L))==NULL){
            P=first(L);
            first(L)=NULL;
        } else {
            address_parent Q=first(L);
            while (next(next(Q))!=NULL) {
                Q=next(Q);
            }
            P=next(Q);
            next(Q)=NULL;
        }
    }
}
void deleteElm(List_parent &L,infotype_parent x, address_parent &P){
    address_parent Q=first(L);
    if (Q!=NULL) { //checking list is empty or not
        if (info(Q)==x){
            deleteFirst(L,P);
        } else {
            while (next(Q)!=NULL&&info(next(Q))!=x) {
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


void printInfo(List_parent L) {
    address_parent Q = first(L);

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

address_parent findElm(List_parent L, infotype_parent x) {
    address_parent Q=first(L);
    while (Q!=NULL&&info(Q)!=x) {
        Q=next(Q);
    }
    return Q;
}
