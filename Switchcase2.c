#include <stdio.h>

int main() 
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    switch(age) 
    {
        case 18 ... 100:
            printf("You can buy GTA 6 because you are adult = %d\n", age);
            break;

        case 13 ... 17:
            printf("You can buy Nintendo Switch because you are teenager = %d\n", age);
            break;

        default:
            printf("You can not buy GTA 6 because you are child = %d\n", age);
            break;
    }

    return 0;
}