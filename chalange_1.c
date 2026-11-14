#include <stdio.h>  // printf() aur scanf() functions use karne ke liye

int main()
{
    // a mein user ka diya hua number store hoga.
    // b original code mein declare tha, lekin kahin use nahi ho raha,
    // isliye yahan sirf a declare kiya hai.
    int a;

    // User se number maangte hain.
    printf("Enter value of a: ");

    // %d integer input leta hai.
    // &a batata hai ki input a variable mein store karna hai.
    scanf("%d", &a);

    // Har line mein a ko 1 se 10 tak ke number se multiply karke print karte hain.
    printf("a x 1 = %d\n", a * 1);
    printf("a x 2 = %d\n", a * 2);
    printf("a x 3 = %d\n", a * 3);
    printf("a x 4 = %d\n", a * 4);
    printf("a x 5 = %d\n", a * 5);
    printf("a x 6 = %d\n", a * 6);
    printf("a x 7 = %d\n", a * 7);
    printf("a x 8 = %d\n", a * 8);
    printf("a x 9 = %d\n", a * 9);
    printf("a x 10 = %d\n", a * 10);

    // 0 ka matlab program successfully khatam hua.
    return 0;
}