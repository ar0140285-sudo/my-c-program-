#include <stdio.h>  // printf() se output dikhane ke liye

int main()
{
    // int whole numbers store karta hai.
    // a aur b mein calculation ke liye numbers rakhenge.
    int a;
    int b;

    // Variables ko values assign kar rahe hain.
    a = 9;
    b = 22;

    // Addition: 9 + 22 = 31
    // %d integer result ko print karta hai.
    // \n output ke baad agli line par le jata hai.
    printf("a+b=%d\n", a + b);

    // Subtraction: 9 - 22 = -13
    printf("a-b=%d\n", a - b);

    // Multiplication: 9 * 22 = 198
    printf("a*b=%d\n", a * b);

    // Integer division: 9 / 22 ka result 0 aayega.
    // Kyunki dono values int hain, decimal hissa hata diya jata hai.
    printf("a/b=%d\n", a / b);

    // Modulus (%) division ka remainder deta hai.
    // 9 ko 22 se divide karne par remainder 9 hai.
    // String mein % ko literal percent ke roop mein dikhane ke liye %% likhte hain.
    printf("a%%b=%d\n", a % b);

    // 0 ka matlab program successfully khatam hua.
    return 0;
}