#include <stdlib.h>
#include "ContactList.h"


Node *Insert_toHead(Node *First, information X){
    Node *TempNode;
    TempNode = (Node*)malloc(sizeof(Node));
    TempNode->data = X;
    TempNode->Next = First;
    First = TempNode;
    return First;
}

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
    Node *TempNode;
    TempNode=Pred->Next;
    Pred->Next=Pred->Next->Next;
    free(TempNode);
}

Node *Delete_Head(Node *First){
    Node *TempNode1;
    TempNode1=First;
    First=First->Next;
    free(TempNode1);
    return First;
}

void Delete_Last(Node *First){
    Node *TempNode1,*TempNode2;
    TempNode1=First;
    TempNode2=First;
    while(TempNode1->Next != NULL){
        TempNode2=TempNode1;
        TempNode1=TempNode1->Next;
    }
    TempNode2->Next=NULL;
    free(TempNode1);
}

int isEmpty(Node *First){
    return !First;
} // return value 1 if empty

Node *MakeNull(Node *First){
    while(!isEmpty(First))
        First=Delete_Head(First);
    return First;
}

void Print(Node *First){
    Node *TempNode;
    TempNode=First;
    while(TempNode){
        printf("%d",TempNode->data);
    }
    printf("\n");
}



