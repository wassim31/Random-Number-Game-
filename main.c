#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for rand(); ( random number generator) function
#include <windows.h> // library that include cmd instructions like cls , dir , cd 

int main()
{
    int number_Mystere, number_Added, i, repeat; // mystere for function rand . added for added number by user
    const int MAX = 100, MIN = 1; // the max-min of random number
    srand(time(NULL)); // init the random number generator function

    // loop statement for asking user to repeat again
    do
    {
        system("cls"); // for clearing the text after repeat = 1 (by user)
        printf("  \t\tRANDOM-NUMBER-GENERATOR GAME\n\n");
        printf("You must find the mystery number \n\n");
        printf("The number is between 1 and 100 , Try now \n\n");
        number_Mystere = (rand() % (MAX - MIN + 1)) + MIN;
        i = 0; // initializing the value variable that count how much player plays .
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

    } while(repeat != 0); // end of first loop of playing again

    return 0;
}
