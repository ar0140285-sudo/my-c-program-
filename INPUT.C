#include <stdio.h>  // printf() aur scanf() functions use karne ke liye

int main()
{
    // Integer variable a banaya.
    // User jo whole number enter karega, woh is variable mein store hoga.
    int a;

    // Screen par input maangne ka message dikhate hain.
    printf("enter the how ");

    // %d batata hai ki integer input lena hai.
    // &a, a variable ka address deta hai taaki scanf input ko a mein rakh sake.
    scanf("%d", &a);

    // Input mein li hui a ki value print karte hain.
    // %d ki jagah a ki value dikhai degi.
    printf("how %d", a);

    // 0 ka matlab program successfully khatam hua.
    return 0;
}