#include <iostream>

using namespace std;
#include "list_child.h"
#include "list_parent.h"
#include "list_relasi.h"

int main()
{
    List_parent LP;
    List_child LC;

    createList(LP);
    createList(LC);

    address_parent P;
    address_child C;

    for (int i=1;i<=5;i++) {
        P=alokasi_parent(i);
        insertLast(LP,P);
    }
    printInfo(LP);
    cout<<"--------------"<<endl;
    printInfo(LP);
    for (int i=5;i>=1;i--) {
        deleteElm(LP,i,P);
        printInfo(LP);
    }
    cout<<"//////////////////"<<endl;

     for (int i=1;i<=5;i++) {
        C=alokasi_child(i);
        insertLast(LC,C);
    }
    printInfo(LC);
    cout<<"--------------"<<endl;
    printInfo(LC);
    for (int i=5;i>=1;i--) {
        deleteElm(LC,i,C);
        printInfo(LC);
    }


    return 0;
}
