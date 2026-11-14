#include <stdio.h>  // printf() aur scanf() functions use karne ke liye

int main()
{
    // User ki age store karne ke liye integer variable.
    int age;

    // User se age enter karne ko kehte hain.
    printf("Enter your age: ");

    // %d integer input leta hai.
    // &age batata hai ki input age variable mein store karna hai.
    scanf("%d", &age);

    // switch age ko neeche diye gaye ranges se compare karta hai.
    switch (age)
    {
        // GNU C compiler ki range-case extension:
        // 18 se 100 tak, dono numbers samet, ye case chalega.
        case 18 ... 100:
            printf("You can buy GTA 6 because you are adult = %d\n", age);
            break;  // Matching case ke baad switch se bahar niklo

        // 13 se 17 tak, dono numbers samet, ye case chalega.
        case 13 ... 17:
            printf("You can buy Nintendo Switch because you are teenager = %d\n", age);
            break;

        // Upar ki dono ranges mein na aane wali age yahan aayegi.
        // Jaise 0-12, 101 se zyada, ya negative age.
        default:
            printf("You can not buy GTA 6 because you are child = %d\n", age);
            break;
    }

    // 0 ka matlab program successfully khatam hua.
    return 0;
}