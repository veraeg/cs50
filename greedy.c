// tl;dr
// Implement a program that calculates the minimum number of coins required to give a user change.

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    float change;
    do
    {
        printf("O hai! How much change is owed? ");
        change = get_float();
    } while(change < 0);

change*=100.0;
int cents =(int)round(change) ;


    int count=0;
    while(cents >= 25) {

           count++;
    cents -= 25;

    }
    while(cents >= 10) {
           count++;
        cents -=10;

    }
    while(cents >= 5) {
       count++;
        cents -=5;

    }

    while(cents >=1) {
        count++;
        cents-=1;
    }
    printf("the amount is %i \n", count);

}
