#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "ContactList.h"

int main(){
    Node *ContactList=NULL;
    char choice[10];
    int choicee;
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
    do{
    fflush(stdin);
    gets(choice);
    choicee=atoi(choice);
    switch(choicee){
        case(1): ContactList=CreateContact(ContactList); break;
        case(2): printf("Haven't support yet\n"); break;
        case(3): printf("Haven't support yet\n"); break;
        case(4): printf("Haven't support yet"); break;
        case(5): Print(ContactList); break;
        case(6): system("cls"); help(); break;
        case(7): break;
        default: printf("Syntax error\n");
    }
    if (choicee==7) break;
    }while(1);

    return 0;
}



