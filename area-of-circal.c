#include <stdio.h>  // printf() aur scanf() jaise input/output functions ke liye

int main()
{
    // float decimal numbers store karta hai.
    // Radius mein user ke diye circle ka radius rakhenge.
    // pi mein pi ki lagbhag value 3.14 rakhi hai.
    float Radius, pi = 3.14;

    // User ko batate hain ki circle ka radius enter karna hai.
    printf("Enter the radius: ");

    // %f ka matlab user se decimal number lena.
    // &Radius batata hai ki input Radius variable mein store karna hai.
    scanf("%f", &Radius);

    // Circle ke area ka formula: pi * radius * radius
    // Yahan Radius * Radius ka matlab radius ka square hai.
    // %f calculated decimal result ko print karta hai.
    printf("Circle ka area = %f\n", Radius * Radius * pi);

    // 0 ka matlab program successfully khatam hua.
    return 0;
}