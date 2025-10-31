#include <stdio.h>

int main() {
    char ch;
    int in_blank = 0;
    printf("Enter text (CTRL+D to end input):\n");

    while ((ch = getchar()) != EOF)
    {
        if (ch == ' ')
        {
            if (!in_blank)
            {
                putchar(' ');
                in_blank = 1;

            }
        }else{
            putchar(ch);
            in_blank = 0;
        }
        
    }
    
}