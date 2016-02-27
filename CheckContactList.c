#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "ContactList.h"

int main(){
    Node *ContactList1=NULL;
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
    printf("\n\t\t2.1. Delete 1 contact");
    printf("\n\t\t2.1. Delete all contacts");
    printf("\n\t3. Search 1 contact");
    printf("\n\t\t3.1. Search 1 contact by name");
    printf("\n\t\t3.2. Search 1 contact by address");
    printf("\n\t\t3.3. Search 1 contact by phone number");
    printf("\n");
    fflush(stdin);
    gets(choice);
    choicee=atoi(choice);
    switch(choicee){
        case(1): printf("Hello");
    }
    printf("\n\n\n\n");

    return 0;
}
