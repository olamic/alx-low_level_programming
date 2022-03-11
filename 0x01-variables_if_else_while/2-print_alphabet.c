
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
2-print_alphabet.c [unix] (05:44 11/03/2022)                                                          0,1 All
-- INSERT --
#include <stdio.h>

/**
 *main - Prints lowercase letters using only putchar
 *
 *Description: a program that prints the alphabet in lowercase
 *Return: 0
*/
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
putchar(c);
c = c + 1;
}
putchar('\n');

return (0);
}
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~

