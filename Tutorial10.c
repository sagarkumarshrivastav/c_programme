// Program for if, else-if, and nested if
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);
    if (age >= 18)
    {
        printf("You can vote!");
    }
    else if (age > 10)
    {
        printf("You're a teenager. You're not eligible for vote");
    }
    else if (age <= 10)
    {
        printf("You're a Child. You're not eligible for vote");
    }
    else
    {
        printf("You are not eligible for vote");
    }
    return 0;
}