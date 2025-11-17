#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#define MAX 100
typedef struct {
    char name[50];
    char phone[15];
    char email[50];
} Contact;
void addContact();
void displayContacts();
void searchContact();
void deleteContact();
#endif
