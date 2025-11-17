#include <stdio.h>
#include "../include/utils.h"
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
void pressEnterToContinue() {
    printf("\nPress Enter to continue...");
    clearInputBuffer();
    getchar();
}
