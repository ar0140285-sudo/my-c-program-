#include <stdio.h>
int main()
{
    int age;
    printf("ENTER YOUER AGE: \n");
    scanf("%d", &age);
    printf("youer age is %d\n", age);
    if(age>=18) {
        printf("you can buy GTA 6 because you are adult =  %d");
    }
        else if(age>13) 
        {
            printf("you can bye nintendo switch because you are teenager " );
        }
        else {
            printf("you can not buy GTA 6 because you are child  = \n %d");
        }
    return 0;
}                                         


