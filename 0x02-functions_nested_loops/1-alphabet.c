#include <stdio.h>

void print_alphabet(void)
{
        char ch;
        char space = '\n';

        for (ch = 'a' ; ch <= 'z' ; ch++)
                putchar(ch);
        putchar(space);
}

