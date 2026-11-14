#include <stdio.h>  // printf() aur scanf() functions use karne ke liye

int main()
{
    // User ki age store karne ke liye integer variable.
    int age;

    // User ko age enter karne ke liye prompt dikhate hain.
    printf("Enter your age:\n");

    // %d integer input leta hai.
    // &age batata hai ki input age variable mein store karna hai.
    scanf("%d", &age);

    // User ki enter ki hui age screen par dikhate hain.
    // %d ki jagah age ki value print hogi.
    printf("Your age is %d\n", age);

    // Pehle condition check hoti hai:
    // agar age 18 ya usse zyada hai, to yeh block chalega.
    if (age >= 18) {
        printf("You can buy GTA 6 because you are adult. Age = %d\n", age);
    }
    // Yeh tabhi check hota hai jab age 18 se kam ho.
    // age > 13 ka matlab is code mein age 14 se 17 tak hai.
    else if (age > 13) {
        printf("You can buy Nintendo Switch because you are teenager.\n");
    }
    // Agar upar ki dono conditions false hain, to yeh block chalega.
    // Is code ke hisaab se age 13 ya usse kam yahan aati hai.
    else {
        printf("You cannot buy GTA 6 because you are a child. Age = %d\n", age);
    }

    // 0 ka matlab program successfully khatam hua.
    return 0;
}


