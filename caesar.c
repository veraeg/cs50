// Implement a program that encrypts messages using Caesar’s cipher. 

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if(argc <2) {
        printf("error\n");
        return 1;
    }

    int k = atoi(argv[1]);

    printf("Plain text: ");
    string plaintext = get_string();
    printf("ciphertext: ");
    for(int i=0; i <strlen(plaintext); i++)
    {
        if(isalpha(plaintext[i]))
        {
            if(isupper(plaintext[i])){

        printf("%c", ((plaintext[i]-65+k)%26)+65);
            }
            if(islower(plaintext[i]))
            {
        printf("%c", ((plaintext[i]-97+k)%26)+97);
            }
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");

}
