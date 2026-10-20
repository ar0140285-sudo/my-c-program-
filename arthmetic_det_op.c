// Preprocessor directive: Ye standard input/output library file (stdio.h) ko include karta hai.
// Iske bina hum input/output functions jaise printf() ya scanf() use nahi kar sakte.
#include <stdio.h>

// main() function: Ye program ka entry point hota hai. 
// Operating system execution hamesha yahi se shuru karta hai.
// 'int' ka matlab hai ki ye function complete hone par ek integer value return karega.
int main() 
{ 
    // Variable Declaration:
    // 'int' data type hai jo batata hai ki variable me sirf bina decimal wale integers (numbers) store honge.
    // Memory me 4 bytes (standard 32/64-bit systems me) reserve hote hain.
    int a; // Variable 'a' declare hua (abhi isme garbage/random value hoti hai)
    int b; // Variable 'b' declare hua

    // Variable Initialization / Assignment:
    // '=' assignment operator hai, jo right side ki value ko left side ke variable me daal deta hai.
    a = 9;   // 'a' ki value ab 9 set ho gayi
    b = 22;  // 'b' ki value ab 22 set ho gayi

    // Arithmetic Operations aur Output:
    // printf() function screen/console par text print karne ke kaam aata hai.
    // '%d' ek format specifier hai, jo batata hai ki yaha par ek integer value replace karke print karni hai.
    // '\n' newline escape sequence hai, jo cursor ko agli line me shift kar deta hai.

    // 1. Addition (+): 9 + 22 = 31
    printf("a+b=%d\n", a + b);

    // 2. Subtraction (-): 9 - 22 = -13
    printf("a-b=%d\n", a - b);

    // 3. Multiplication (*): 9 * 22 = 198
    printf("a*b=%d\n", a * b);

    // 4. Division (/):
    // Dhyan de: 'a' aur 'b' dono int hain, isliye C me integer division hota hai (decimal part drop ho jata hai).
    // 9 / 22 = 0.409... hota hai, par integer hone ki wajah se result sirf 0 aayega.
    printf("a/b=%d\n", a / b);

    // 5. Modulus (%%):
    // '%' operator remainder (sheshfal) deta hai jab a ko b se divide kiya jaye.
    // Note: printf ke format string me '%' print karne ke liye double '%%' likhna padta hai, 
    // nahi to compiler use format specifier samajh leta hai.
    // 9 ko 22 se divide karne par quotient 0 aur remainder 9 bachta hai, isliye result 9 aayega.
    printf("a%%b=%d\n", a % b);
     
    // return 0:
    // OS ko signal deta hai ki program bina kisi error ke successfully execute ho chuka hai.
    return 0;
}