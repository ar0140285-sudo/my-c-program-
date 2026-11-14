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

    // switch age ki value ko neeche diye gaye case values se compare karta hai.
    switch (age)
    {
        // Ye case tabhi chalega jab age bilkul 18 ho.
        case 18:
            printf("You can buy anything because you are adult = %d\n", age);

            // break switch se bahar nikalta hai,
            // taaki neeche ke cases/default bhi execute na hon.
            break;

        // Ye case tabhi chalega jab age bilkul 13 ho.
        case 13:
            printf("You can buy games because you are teenager = %d\n", age);
            break;

        // Agar age 18 ya 13 ke barabar nahi hai, to default chalega.
        default:
            printf("You cannot buy anything because you are child = %d\n", age);
            break;
    }

    // 0 ka matlab program successfully khatam hua.
    return 0;
}