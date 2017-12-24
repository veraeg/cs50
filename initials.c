// Implement a program that, given a person’s name, prints a person’s initials, per the below.

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    string name = get_string();
    printf("%c", toupper(name[0]));
    for(int i=0; i <strlen(name); i++)
    {
        if(name[i] == ' ')
        {
            int pos = i+1;
            char next = toupper(name[pos]);

        printf("%c", next);
        }

    }
     printf("\n");
}

