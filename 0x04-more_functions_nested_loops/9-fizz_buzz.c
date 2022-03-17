#include <unistd.h>

/**
 * main - program that print numbers 1 to 100
 * prints fizz for the multiples of 3
 * prints multiples of 5 as buzz
 *
 * Returns: nothing
 */
void main(void)
{
int i;
for (i = 1, i <= 100, i++)
{
if (i % 3 == 0)
{
printf("Fizz\n")
}
else if (i % 5 == 0)
{
printf("Buzz\n")
}
else if (i % 15 == 0)
{
printf("FizzBuzz\n")
}
else
{
printf("%d", i)
}
}
return (0)
}
