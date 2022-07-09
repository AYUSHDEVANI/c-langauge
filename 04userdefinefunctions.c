#include <stdio.h>

int stringlength(char *);

int main()
{
    char text[100];
    int length;

    printf("Enter text (max-100 characters):");
    scanf("%[^\n]s", text);

    length = stringlength(text);

    printf("Input text is: %s\n", text);
    printf("Length is: %d\n", length);

    return 0;
}

int stringlength(char *str)
{
    int len = 0;

    for (len = 0; str[len] != '\0'; len++)
        ;

    return len;
}