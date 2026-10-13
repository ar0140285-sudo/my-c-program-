#include <stdio.h>

int main()
{
    int age;

    printf("ENTER YOUR AGE: \n");
    scanf("%d", &age);

    printf("Your age is %d\n", age);

    if (age >= 18) {
        printf("You can buy GTA 6 because you are adult (Age: %d)\n", age);
    }
    else if (age > 11) {
        printf("You can buy Nintendo Switch because you are teenager (Age: %d)\n", age);
    }
    else if (age >1) {
        printf("you can buy chocolate ");
    }
    else {
        printf("You cannot buy GTA 6 because you are a child (Age: %d)\n", age);
    }

    return 0;
}