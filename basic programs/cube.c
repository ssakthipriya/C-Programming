#include <stdio.h>
int main ()
{
    int number;
    printf("%s", "Enter a number: ");
    scanf("%d", &number);
    int cube_of_number = number * number * number;
    printf("The cube value of %d is: %d", number, cube_of_number);
}
