#include <stdlib.h>
#include "ContactList.h"
#define MAXLEN 100


Node *Insert_toHead(Node *First, information X){
    Node *TempNode;
    TempNode = (Node*)malloc(sizeof(Node));
    TempNode->data = X;
    TempNode->Next = First;
    First = TempNode;
    return First;
}
g
Node *Insert_Middle(Node *Pred, information X){
    Node *TempNode;
    TempNode = (Node*)malloc(sizeof(Node));
    TempNode->data = X;
    TempNode->Next=Pred->Next;
    Pred->Next=TempNode;
    return TempNode;
}

/*
Node *Insert_toLast(Node *First, information X ){
    Node *TempNode;
    Node *NewNode;
    NewNode = (Node*) malloc(sizeof(Node));
    NewNode->Next=X;
    TempNode=First;
    while(TempNode->Next != NULL){
        TempNode=TempNode->Next;
    TempNode->Next=NewNode;
    return First;
    }
} */

void Delete(Node *Pred){

}
