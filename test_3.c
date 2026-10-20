#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\n--- GAME MENU ---\n");
        printf("1. Start Game\n");
        printf("2. Settings\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        printf("Aapne choose kiya option %d\n", choice);

    } while (choice != 3); // Jab tak user 3 (Exit) na daba de, menu bar-bar dikhao

    printf("Game Band ho gaya. Bye!\n");
    return 0;
}