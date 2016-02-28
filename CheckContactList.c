#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "ContactList.h"

int main(){
    Node *ContactList=NULL;
    char choice[10];
    int select;
    printf("===========================================================");
    printf("\n\n\t\tWELCOME TO CONTACT LIST");
    printf("\n\n===========================================================");
    printf("\n\n\tContact list support the following command: ");
    printf("\n\t1. Create a new contact ");
    printf("\n\t\t11. Enter name");
    printf("\n\t\t12. Enter address");
    printf("\n\t\t13. Enter email");
    printf("\n\t\t14. Enter phone number");
    printf("\n\t2. Delete contacts");
    printf("\n\t\t21. Delete a contact by name");
    printf("\n\t\t22. Delete all contacts");
    printf("\n\t3. Search a contact");
    printf("\n\t\t31. Search a contact by name");
    printf("\n\t\t32. Search a contact by address");
    printf("\n\t\t33. Search a contact by phone number");
    printf("\n\t4. Edit a contact");
    printf("\n\t\t41. Edit name of a contact");
    printf("\n\t\t42. Edit address of a contact");
    printf("\n\t\t43. Edit phone number of a contact");
    printf("\n\t5. Print contact list");
    printf("\n\t6. Clear screen");
    printf("\n\t7. Exit");
    printf("\n\n===========================================================");
    printf("\n");
    do{
    fflush(stdin);
    gets(choice);
    select=atoi(choice);
    switch(select){
        case(1): ContactList=CreateContact(ContactList); break;
        case(21): Delete(ContactList,Search(ContactList,1)); break;
        case(22): MakeNull(ContactList); ContactList=NULL; break;
        case(31): Print_forSearch(ContactList,Search(ContactList,1)); break;
        case(32): Print_forSearch(ContactList,Search(ContactList,2)); break;
        case(33): Print_forSearch(ContactList,Search(ContactList,3)); break;
        case(4): printf("Haven't support yet"); break;
        case(5): Print(ContactList); break;
        case(6): system("cls"); help(); break;
        case(7): break;
        default: printf("Syntax error\n");
    }
    if (select==7) {
        printf("Do you really want to exit? (Y/N)");
        fflush(stdin);
        gets(choice);
        if(strcmp(choice,"Y")==0 || strcmp(choice,"y")==0) break;
    }
    }while(1);

    return 0;
}



