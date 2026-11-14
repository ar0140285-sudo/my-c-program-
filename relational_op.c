#include <stdio.h>  // printf() se output dikhane ke liye

int main()
{
    // Do integer variables banaye hain jinhe compare karenge.
    int a;
    int b;

    // Variables ko values assign karte hain.
    a = 9;
    b = 22;

    // == check karta hai ki dono values barabar hain ya nahi.
    // 9 aur 22 barabar nahi, isliye result 0 (false) hoga.
    printf("is equal=%d\n", a == b);

    // != check karta hai ki dono values alag hain ya nahi.
    // 9 aur 22 alag hain, isliye result 1 (true) hoga.
    printf("not equal=%d\n", a != b);

    // < check karta hai ki left value right value se chhoti hai ya nahi.
    // 9, 22 se chhota hai, isliye result 1 (true) hoga.
    printf("less than=%d\n", a < b);

    // >= check karta hai ki left value right se badi ya barabar hai ya nahi.
    // 9, 22 se na bada hai na barabar, isliye result 0 (false) hoga.
    printf("greater than or equal to=%d\n", a >= b);

    // <= check karta hai ki left value right se chhoti ya barabar hai ya nahi.
    // 9, 22 se chhota hai, isliye result 1 (true) hoga.
    printf("less than or equal to=%d\n", a <= b);

    // Comparison ka result C mein 1 (true) ya 0 (false) hota hai.
    // 0 ka matlab program successfully khatam hua.
    return 0;
}