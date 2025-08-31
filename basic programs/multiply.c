#include <stdio.h>
int main ()
{
   int number1, number2;
   printf("%s", "Enter number 1 : ");
   scanf("%d", &number1);
   printf("%s", "Enter number 2 : ");
   scanf("%d", &number2);
   int multiplied_value = number1 * number2;
   printf("Multiplications of %d and %d is %d", number1, number2, multiplied_value);

}