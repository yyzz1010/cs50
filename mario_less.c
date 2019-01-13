#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);

int main(void)
{
    int height = get_positive_int("Height: ");
    for (int line = 0; line < height; line++)
    {
        for (int spaces = height - line; spaces > 1; spaces--)
        {
            printf(" ");
        }
        for (int hashes = 0; hashes < line + 1; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}


int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 1  || n > 8);
    return n;
}
  
  
  // code reference: https://github.com/Dnld/solutions-to-CS50/blob/master/mario.c
  // and Lecture 1 notes: https://cs50.harvard.edu/college/weeks/1/notes/
