#include <stdio.h>  // printf() se output dikhane ke liye

int main()
{
    // Neeche wali lines // se shuru hoti hain, isliye ye comments hain:
    // compiler inhe execute nahi karta.
    // int a;
    // a = 9;

    // int whole number store karta hai.
    // a ko banate hi uski initial value 9 rakhi ja rahi hai.
    int a = 9;

    // Ye commented lines bhi execute nahi hoti:
    // float w;
    // w = 4.5;

    // float decimal number store karta hai.
    // w ko banate hi uski initial value 4.5 rakhi ja rahi hai.
    float w = 4.5;

    // char ek character store karta hai.
    // Character ko single quotes mein likhte hain.
    char n = 'w';

    // %f float value dikhata hai; yahan w print hoga.
    // %d integer value dikhata hai; yahan a print hoga.
    // %c ek character dikhata hai; yahan n print hoga.
    printf("w=%f and a=%d and n=%c\n", w, a, n);

    // 0 ka matlab program successfully khatam hua.
    return 0;
}