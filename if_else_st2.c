#include <stdio.h>  // printf() aur scanf() functions use karne ke liye

int main()
{
    // User ki age store karne ke liye integer variable.
    int age;

    // User se age enter karne ko kehte hain.
    printf("Enter your age:\n");

    // %d integer input leta hai.
    // &age batata hai ki input age variable mein store karna hai.
    scanf("%d", &age);

    // Jo age user ne enter ki, use screen par dikhate hain.
    printf("Your age is %d\n", age);

    // Sabse pehle check hota hai ki age 18 ya usse zyada hai ya nahi.
    if (age >= 18) {
        // Condition true ho to adult wala message print hota hai.
        // %d ki jagah age ki value dikhai jayegi.
        printf("You can buy GTA 6 because you are adult (Age: %d)\n", age);
    }
    // Yeh condition tabhi check hoti hai jab age 18 se kam ho.
    // age > 13 ka matlab is code mein age 14 se 17 tak hai.
    else if (age > 13) {
        printf("You can buy Nintendo Switch because you are teenager (Age: %d)\n", age);
    }
    // Agar dono conditions false hain, age 13 ya usse kam hai.
    else {
        printf("You cannot buy GTA 6 because you are a child (Age: %d)\n", age);
    }

    // 0 ka matlab program successfully khatam hua.
    return 0;
}