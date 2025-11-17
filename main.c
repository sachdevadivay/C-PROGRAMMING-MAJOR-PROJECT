#include <stdio.h>
#include "../include/phonebook.h"
#include "../include/utils.h"
int main() {
    int choice;
    while (1) {
        printf("\n===== PHONEBOOK MENU =====\n");
        printf("1. Add Contact\n2. Display Contacts\n3. Search Contact\n4. Delete Contact\n5. Exit\n");
        printf("Enter choice: "); scanf("%d", &choice); getchar();
        switch(choice) {
            case 1: addContact(); break;
            case 2: displayContacts(); break;
            case 3: searchContact(); break;
            case 4: deleteContact(); break;
            case 5: return 0;
            default: printf("Invalid choice!\n");
        }
        pressEnterToContinue();
    }
}
