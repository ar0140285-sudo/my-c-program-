#include <stdio.h>  // printf() aur scanf() functions use karne ke liye

int main()
{
    // User ka menu selection store karne ke liye integer variable.
    int choice;

    // do-while mein menu ka code pehle chalta hai,
    // condition baad mein check hoti hai.
    // Isliye menu kam-se-kam ek baar zaroor dikhega.
    do
    {
        // \n pehle ek blank line deta hai, phir menu ka title print hota hai.
        printf("\n--- GAME MENU ---\n");

        // Menu ke available options dikhate hain.
        printf("1. Start Game\n");
        printf("2. Settings\n");
        printf("3. Exit\n");

        // User ko 1, 2, ya 3 mein se choice enter karne ko kehte hain.
        printf("Enter your choice (1-3): ");

        // %d integer choice input leta hai.
        // &choice batata hai ki input choice variable mein store karna hai.
        scanf("%d", &choice);

        // User ki enter ki hui choice screen par dikhate hain.
        printf("Aapne choose kiya option %d\n", choice);

    // Agar choice 3 nahi hai, condition true hogi aur menu dobara dikhega.
    // Choice 3 hone par condition false hoti hai aur loop ruk jata hai.
    } while (choice != 3);

    // Loop khatam hone ke baad exit message print hota hai.
    printf("Game Band ho gaya. Bye!\n");

    // 0 ka matlab program successfully khatam hua.
    return 0;
}