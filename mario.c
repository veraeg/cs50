//tl;dr
//Implement a program that prints out a half-pyramid of a specified height.

#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int height;
    do {
        printf("Plese specify number:");
        height = get_int();
    } while (height <0 || height >23);


  for (int row = 0; row < height; row ++) {

    for (int spaces = height-row; spaces >1; spaces--) {
        printf(" ");
    }
    for (int block = 2; block <= row+3; block++) {

     printf("#");
}
printf("\n");
}
}
