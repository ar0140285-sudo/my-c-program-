// Preprocessor directive: Standard Input Output library ko include karta hai.
// Iske bina printf (output) aur scanf (input) functions kaam nahi karenge.
#include <stdio.h>

// main() function: Program ka entry point, execution yahi se shuru hota hai.
// 'int' return type hai, jo bata raha hai ki execution end hone par integer code return hoga.
int main() 
{
    // Variable Declaration:
    // 'age' naam ka integer variable memory me 4 bytes allocate karta hai.
    // Abhi isme random (garbage) value hai jab tak user se input na mile.
    int age;

    // Output Prompt:
    // User ko console screen par message dikhata hai taaki use pata chale ki age enter karni hai.
    printf("Enter your age: ");

    // Input Function:
    // 1. "%d" format specifier batata hai ki user se integer value read karni hai.
    // 2. "&age" ('&' address-of operator hai) variable ka memory address pass karta hai,
    //    taaki scanf user ka typed number direct us memory location par save kar sake.
    scanf("%d", &age);

    // Switch Statement:
    // 'age' variable ki value evaluate hoti hai aur matched 'case' block par jump karti hai.
    switch(age) 
    {
        // GCC Range Extension (18 ... 100):
        // Note: '...' (three dots with spaces around) GNU C compiler ka feature hai jo range check karta hai.
        // Agar age 18 se lekar 100 ke beech me kuch bhi hui, to ye block chalega.
        case 18 ... 100:
            printf("You can buy GTA 6 because you are adult = %d\n", age);
            // break: Execution ko switch block se bahar phenk deta hai.
            // Agar break na ho, to code agle cases me bhi execute hone lagega (jise 'fall-through' bolte hain).
            break;

        // Range Extension (13 ... 17):
        // Agar age 13 se lekar 17 ke beech me aati hai, to ye block chalega.
        case 13 ... 17:
            printf("You can buy Nintendo Switch because you are teenager = %d\n", age);
            break;

        // Default Case:
        // Agar user ki dali hui age upar diye gaye kisi bhi case me match nahi karti 
        // (jaise 0-12, 101 se upar, ya negative numbers), to code yaha aayega.
        default:
            printf("You can not buy GTA 6 because you are child = %d\n", age);
            break;
    }

    // OS ko signal deta hai ki program smoothly bina kisi error ke successfully finish ho gaya.
    return 0;
}