#include <stdio.h>
#include <string.h>
#include "../include/phonebook.h"
#include "../include/utils.h"
Contact contacts[MAX];
int total = 0;
void addContact() {
    if (total >= MAX) { printf("Phonebook is full!\n"); return; }
    printf("Enter Name: "); fgets(contacts[total].name, 50, stdin);
    printf("Enter Phone: "); fgets(contacts[total].phone, 15, stdin);
    printf("Enter Email: "); fgets(contacts[total].email, 50, stdin);
    total++; printf("Contact added successfully!\n");
}
void displayContacts() {
    if (total == 0) { printf("No contacts saved.\n"); return; }
    printf("\n--- CONTACT LIST ---\n");
    for (int i = 0; i < total; i++) {
        printf("\nName: %s", contacts[i].name);
        printf("Phone: %s", contacts[i].phone);
        printf("Email: %s", contacts[i].email);
    }
}
void searchContact() {
    char name[50];
    printf("Enter name to search: "); fgets(name, 50, stdin);
    for (int i = 0; i < total; i++) {
        if (strstr(contacts[i].name, name) != NULL) {
            printf("\nFOUND CONTACT\n");
            printf("Name: %s", contacts[i].name);
            printf("Phone: %s", contacts[i].phone);
            printf("Email: %s", contacts[i].email);
            return;
        }
    }
    printf("Contact not found.\n");
}
void deleteContact() {
    char name[50];
    printf("Enter name to delete: "); fgets(name, 50, stdin);
    for (int i = 0; i < total; i++) {
        if (strstr(contacts[i].name, name) != NULL) {
            for (int j = i; j < total - 1; j++) contacts[j] = contacts[j+1];
            total--; printf("Contact deleted successfully.\n"); return;
        }
    }
    printf("Contact not found.\n");
}
