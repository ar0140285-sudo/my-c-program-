#include <stdio.h>   // Standard input/output functions ka use karne ke liye

int main()
{
    int a;          // Variable 'a' declare kiya
    int b;          // Variable 'b' declare kiya

    a = 9;          // 'a' me 9 store kiya
    b = 0;          // 'b' me 0 store kiya

    // Logical AND (&&):
    // Dono conditions true honi chahiye.
    // Yahan a = 9 (true), b = 0 (false)
    // true && false = false => 0
    printf("logical and operator = %d\n", a && b);

    // Logical OR (||):
    // Kisi ek condition true hone par result true hota hai.
    // Yahan a = 9 (true), b = 0 (false)
    // true || false = true => 1
    printf("logical or = %d\n", a || b);

    // Logical NOT (!):
    // Value ka opposite return karta hai.
    // a = 9 (true), !a = false => 0
    printf("logical not = %d\n", !a);

    return 0;       // Program successfully end
}