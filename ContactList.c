#include <stdlib.h>
#include <strings.h>
#include <stdio.h>
#include <conio.h>
#include "ContactList.h"

void help(){
    printf("===========================================================");
    printf("\n\n\t\tWELCOME TO CONTACT LIST");
    printf("\n\n===========================================================");
    printf("\n\n\tContact list support the following command: ");
    printf("\n\t1. Create a new contact ");
    printf("\n\t\t1.1. Enter name");
    printf("\n\t\t1.2. Enter address");
    printf("\n\t\t1.3. Enter email");
    printf("\n\t\t1.4. Enter phone number");
    printf("\n\t2. Delete contacts");
    printf("\n\t\t2.1. Delete a contact");
    printf("\n\t\t2.1. Delete all contacts");
    printf("\n\t3. Search a contact");
    printf("\n\t\t3.1. Search a contact by name");
    printf("\n\t\t3.2. Search a contact by address");
    printf("\n\t\t3.3. Search a contact by phone number");
    printf("\n\t4. Edit a contact");
    printf("\n\t\t4.1. Edit name of a contact");
    printf("\n\t\t4.2. Edit address of a contact");
    printf("\n\t\t4.3. Edit phone number of a contact");
    printf("\n\t5. Print contact list");
    printf("\n\t6. Clear screen");
    printf("\n\t7. Exit");
    printf("\n\n===========================================================");
    printf("\n");
}

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


Node *Delete_Head(Node *First){
    Node *TempNode1;
    TempNode1=First;
    First=First->Next;
    free(TempNode1);
    return First;
}

void Delete_Middle(Node *Pred){
    Node *TempNode;
    TempNode=Pred->Next;
    Pred->Next=Pred->Next->Next;
    free(TempNode);
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
    printf("Delete Completely\n");
    getch();
    return First;
}

void Print(Node *First){
    Node *TempNode;
    int count=0;
    TempNode=First;
    system("cls");
    printf("\n\n+===+==============================+==============================+==============================+===============+");
    printf("\n\n                                       WELCOME TO CONTACT LIST");
    printf("\n\n+===+==============================+==============================+==============================+===============+");
    printf("\n|STT| Name                         | address                      | email                        |         phone |");
    printf("\n+---+------------------------------+------------------------------+------------------------------+---------------+");
    while(TempNode){
        ++count;
        printf("\n|%3d|%30s|%30s|%30s|%15s|",count,TempNode->data.name,TempNode->data.add,TempNode->data.email,TempNode->data.phone);
        TempNode=TempNode->Next;
    }
    printf("\n+===+==============================+==============================+==============================+===============+");
    printf("\n");
    getch();

}


Node *CreateContact(Node *First){
    Node *TempNode;
    TempNode = (Node*)malloc(sizeof(Node));
    information X;
    printf("Enter name: ");
    fflush(stdin);
    gets(X.name);
    printf("Enter address: ");
    fflush(stdin);
    gets(X.add);
    printf("Enter email: ");
    fflush(stdin);
    gets(X.email);
    printf("Enter phone number: ");
    fflush(stdin);
    gets(X.phone);
    if(!First) {First = Insert_toHead(First,X); TempNode = First; }
    else TempNode = Insert_Middle(TempNode,X);
    printf("Enter complete.\n");
    getch();
    return First;
}


int Search(Node *First,int k){
    information X;
    int location=0;
    Node *TempNode;
    TempNode=First;
    switch(k){
        case(1): printf("Enter name: "); fflush(stdin); gets(X.name); break;
        case(2): printf("Enter address: "); fflush(stdin); gets(X.add); break;
        case(3): printf("Enter phone: "); fflush(stdin); gets(X.phone); break;
    }
    while(TempNode){
        location++;
        if(strcmp(TempNode->data.name,X.name)==0) return location;
        if (strcmp(TempNode->data.add,X.add)==0) return location;
        if (strcmp(TempNode->data.phone,X.phone)==0) return location;
        TempNode=TempNode->Next;
    }
    return 0;
}

void Print_forSearch(Node *First, int location){
    int i;
    if (location == 0 ) {
            printf("Not found");
            getch();
            return;
    }
    Node *TempNode;
    TempNode=First;
    system("cls");
    printf("\n\n+===+==============================+==============================+==============================+===============+");
    printf("\n\n                                       WELCOME TO CONTACT LIST");
    printf("\n\n+===+==============================+==============================+==============================+===============+");
    printf("\n|STT| Name                         | address                      | email                        |         phone |");
    printf("\n+---+------------------------------+------------------------------+------------------------------+---------------+");
    for(i=2;i<=location;++i)
        TempNode=TempNode->Next;
    printf("\n|%3d|%30s|%30s|%30s|%15s|",location,TempNode->data.name,TempNode->data.add,TempNode->data.email,TempNode->data.phone);

    printf("\n+===+==============================+==============================+==============================+===============+");
    printf("\n");
    getch();
}

void Delete(Node *First, int location){
    int i;
    if (location == 0 ) {
            printf("Not found");
            getch();
            return;
    }
    Node *TempNode;
    TempNode=First;
    if(location==1) {
        Delete_Head(TempNode);
        printf("Delete complete.\n");
        getch();
        return;
    }
    for(i=2;i<location;++i)
        TempNode=TempNode->Next;
    Delete_Middle(TempNode);
    printf("Delete complete.\n");
    getch();
    return;
}
