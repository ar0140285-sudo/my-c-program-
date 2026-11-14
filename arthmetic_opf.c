#include <stdio.h>  // printf() se output dikhane ke liye

int main()
{
    // float decimal numbers store karta hai.
    // a aur b variables mein calculations ke numbers rakhenge.
    float a;
    float b;

    // a ko decimal value di.
    a = 9.67;

    // b float hai, isliye isme 22 ko decimal ke roop mein bhi store kiya ja sakta hai.
    b = 22;

    // Addition: a + b
    // %f float result ko print karta hai.
    printf("a+b=%f\n", a + b);

    // Subtraction: a - b
    printf("a-b=%f\n", a - b);

    // Multiplication: a * b
    printf("a*b=%f\n", a * b);

    // Division: a / b
    printf("a/b=%f\n", a / b);

    // 0 ka matlab program successfully khatam hua.
    return 0;
}