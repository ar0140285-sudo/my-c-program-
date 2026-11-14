#include <stdio.h>  // printf() aur scanf() functions use karne ke liye

int main()
{
    // Simple interest calculate karne ke liye:
    // Principal = shuru ki rakam
    // Rate      = saalana byaaj ka percent
    // time      = samay, aam taur par saalon mein
    //
    // int ka matlab in variables mein whole numbers rakhe jayenge.
    int Principal, Rate, time;

    // User se shuru ki rakam (Principal) poochte hain.
    printf("Enter the Principal Amount:\n");

    // %d integer input leta hai.
    // &Principal batata hai ki input Principal variable mein store karna hai.
    scanf("%d", &Principal);

    // User se interest rate percent mein lete hain.
    printf("Enter the Rate:\n");
    scanf("%d", &Rate);

    // User se samay lete hain.
    printf("Enter the Time in years:\n");
    scanf("%d", &time);

    // Simple interest ka formula:
    // SI = (Principal * Rate * time) / 100
    // %d calculated whole-number result print karta hai.
    printf("Simple interest = %d\n", Principal * Rate * time / 100);

    // 0 ka matlab program successfully khatam hua.
    return 0;
}
















