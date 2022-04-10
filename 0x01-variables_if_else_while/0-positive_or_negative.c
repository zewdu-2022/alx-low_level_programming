#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *        
 *Return: Always 0 (Success/correct)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n == 0);
{
printf("%1 is zero\n", n);
}

else if (n < 0)
{	
printf("%1 is negative\n", n);
else 
{
prigntf("%1 is positive\n", n);
}
return (0);
}
