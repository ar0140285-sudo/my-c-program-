#include <stdio.h>  // printf() aur scanf() functions use karne ke liye

int main()
{
    // User ki age store karne ke liye integer variable.
    int age;

    // User ko age enter karne ka message dikhate hain.
    printf("Enter your age:\n");

    // %d integer input leta hai.
    // &age batata hai ki input age variable mein store karna hai.
    scanf("%d", &age);

    // User ki enter ki hui age screen par dikhate hain.
    printf("Your age is %d\n", age);

    // Sabse pehle check: kya age 18 ya usse zyada hai?
    if (age >= 18)
    {
        // Haan, to adult wala message print hoga.
        printf("You can buy GTA 6 because you are adult (Age: %d)\n", age);
    }
    // Yeh tabhi check hoga jab age 18 se kam ho.
    // age > 11 ka matlab is code mein age 12 se 17 tak hai.
    else if (age > 11)
    {
        printf("You can buy Nintendo Switch because you are teenager (Age: %d)\n", age);
    }
    // Yeh tabhi check hoga jab upar ki dono conditions false hon.
    // age > 1 ka matlab is code mein age 2 se 11 tak hai.
    else if (age > 1)
    {
        printf("You can buy chocolate\n");
    }
    // Agar koi bhi condition true nahi hui,
    // to age 1 ya usse kam hai aur yeh block chalega.
    else
    {
        printf("You cannot buy GTA 6 because you are a child (Age: %d)\n", age);
    }

    // 0 ka matlab program successfully khatam hua.
    return 0;
}