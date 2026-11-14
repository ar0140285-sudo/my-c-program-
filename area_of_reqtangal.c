#include <stdio.h>  // printf() aur scanf() functions istemal karne ke liye
                    // printf() output dikhata hai, scanf() user se input leta hai

int main()
{
    // Do integer variables banaye:
    // lenth mein rectangle ki length aur width mein uski width rakhenge.
    // int ka istemal yahan whole numbers ke liye hai.
    int lenth, width;

    // User ko batate hain ki length enter karni hai.
    printf("Enter the length: ");

    // %d ka matlab scanf() ek integer input lega.
    // &lenth ka matlab: input ko lenth variable ke address par store karo.
    // Is line ke baad user ki di hui value lenth mein hogi.
    scanf("%d", &lenth);

    // Ab user se rectangle ki width maangte hain.
    printf("Enter the width: ");

    // User ka integer input width variable mein store hota hai.
    // &width width variable ka address deta hai.
    scanf("%d", &width);

    // Rectangle ka area nikalne ka formula:
    // area = length * width
    // Yahan lenth aur width ki values multiply hoti hain.
    // %d calculated whole-number area ko output mein dikhata hai.
    printf("Rectangle ka area = %d\n", lenth * width);

    // return 0 batata hai ki program successfully complete hua.
    return 0;
}