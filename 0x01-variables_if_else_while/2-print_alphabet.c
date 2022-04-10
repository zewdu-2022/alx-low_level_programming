#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success/correct)
 */
int main()
{
    char ch = 'a';

    printf("Alphabets from a - z are: \n");
    while(ch<='z')
    {
        printf("%c\n", ch);
        ch++;
    }

    return 0;
}
