#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
int n,lastd;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;

if (n % 10 > 5)

if (lastd > 5)
{	
printf("Last digit of %d is %d greater than 5\n", n, lasted);
}
else if (lasted == 0)
{	
printf("Last digit of %dis %d and 0\n", n, lastd);
}
else if (lasted < 6 && lasted ! = 0)
{
printf("Last digit of %d is %d and less than 6 and not 0\n", n, lastd);
}

return (0);
}
