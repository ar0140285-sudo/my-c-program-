#include <stdio.h>  // printf() se output dikhane ke liye

int main()
{
    // i loop counter hai; counting 1 se shuru hogi.
    int i = 1;

    // do-while loop mein pehle { } ke andar ka code chalta hai,
    // uske baad condition check hoti hai.
    // Isliye do-while ka code kam-se-kam ek baar zaroor chalta hai.
    do
    {
        // i ki current value screen par print hoti hai.
        // %d integer dikhata hai aur \n agli line par le jata hai.
        printf("%d\n", i);

        // i ki value 1 se badhate hain.
        // ++ ka matlab hai: i = i + 1
        i++;

    // Code chalne ke baad check hota hai ki i, 5 ya usse chhota hai.
    // Agar condition true ho, loop phir se chalta hai.
    } while (i <= 5);

    // Jab i ki value 6 hoti hai, i <= 5 false ho jata hai,
    // aur loop band ho jata hai.

    // 0 ka matlab program successfully khatam hua.
    return 0;
}