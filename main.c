#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for rand(); ( random number generator) function

int main()
{

    int number_Mystere, number_Added, i = 0, repeat; // mystere for function rand . added for added number by user
    const int MAX = 100, MIN = 1; // the max-min of random number
    srand(time(NULL)); // init the random number generator function
    printf("  \t\tRANDOM-NUMBER-GENERATOR GAME\n\n");
    printf("You must find the mystery number \n\n");
    printf("The number is between 1 and 100 , Try now \n\n");
    // loop statement for asking user to repeat again
    do
    {
        number_Mystere = (rand() % (MAX - MIN + 1)) + MIN;
        // the main loop statement
        do
        {
            printf("Add the number : ");
            scanf("%d", &number_Added);
            if(number_Added > number_Mystere)
            {
                printf("The added number is bigger than the mystery\n\n");
                printf("Try again : ");
            }
            else if (number_Added < number_Mystere)
            {
                printf("The added number is smaller than the mystery\n\n");
                printf("Try again : ");
            }
            i++;
        }while(number_Added != number_Mystere);
        printf("Congratulations , You find the number : %d in %d time\n\n", number_Mystere, i);
        printf("If you want to play again type 1 ; if not type 0 : ");
        scanf("%d", &repeat);
        i = 0; // updating the variable of how much the user enter the added-number

        
    } while(repeat != 0); // end of first loop of playing again

    return 0;
}
