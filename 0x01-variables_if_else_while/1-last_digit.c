#include <stdio.h>
#include <time.h>
#include <cstdlib.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
int n, lastd;

srand(time(NULL));
n = rand() - RAND_MAX / 2;
lastd = n % 10;

if (lastd > 5)
{	
printf("Last digit of %d is %d greater than 5\n", n, lastd);
}
else if (lastd == 0)
{	
printf("Last digit of %dis %d and 0\n", n, lastd);
}
else if (lastd < 6 && lastd != 0)
{
printf("Last digit of %d is %d and less than 6 and not 0\n", n, lastd);
}

return (0);
}
