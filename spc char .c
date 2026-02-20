#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); // space before %c to avoid input issues

    if (ch >= '0' && ch <= '9')
    {
        printf("It is a Digit.\n");
    }
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("It is an Alphabet Character.\n");
    }
    else
    {
        printf("It is a Special Character.\n");
    }

    return 0;
}
