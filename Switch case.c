#include   <stdio.h>
int main()
{
    int age;
    printf("enter your age \n");
    scanf("%d",&age);
    switch(age)
    {
        case 18:
            printf("you can buy GTA 6 because you are adult = %d",age);
            break;
        case 13:
            printf("you can buy nintendo switch because you are teenager = %d",age);
            break;
        default:
            printf("you can not buy GTA 6 because you are child = %d",age);
    }
    return 0;
}