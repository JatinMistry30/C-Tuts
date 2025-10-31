#include <stdio.h>

int main()
{
    char ch;
    int blanks = 0, tabs = 0, newLines = 0;
    printf("Enter text (CTRL+D to end the input):\n");

    while ((ch = getchar()) != EOF)
    {
        if (ch == ' ')
        {
            blanks++;
        }
        else if (ch == '\t')
        {
            tabs++;
        }
        else if (ch == '\n')
        {
            newLines++;
        }

        printf("Blanks: %d\n", blanks);
        printf("Tabs: %d\n", tabs);
        printf("Newlines: %d\n", newLines);
    }

    return 0;
}