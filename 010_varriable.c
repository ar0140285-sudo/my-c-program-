#include <stdio.h>  // printf() se screen par output dikhane ke liye

int main()
{
    // int ka matlab: whole number store karne wala data type
    // a aur b naam ke do integer variables banaye
    int a, b;

    // Variables mein values store kar rahe hain
    a = 9999;
    b = 67;

    // printf() screen par text aur values dikhata hai
    // Pehla %d, b ki value (67) se replace hoga
    // Doosra %d, a ki value (9999) se replace hoga
    printf("%d number is %d", b, a);

    // return 0 ka matlab program successfully khatam hua
    return 0;
}