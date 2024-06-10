#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numberofguess = 1;
    int myguess;
    srand(time(0));
    int number = rand() % 100 + 1;
    
    do {
        printf("Enter the number to be guessed:\n");
        scanf("%d", &myguess);
        
        if (myguess > number) {
            printf("Your number is greater than the number to be guessed\n");
        } else if (myguess < number) {
            printf("Your number is lesser than the number to be guessed\n");
        } else {
            printf("Yay, you got it! You took %d chances to guess it.\n", numberofguess);
            printf("The random number was: %d\n", number);
        }
        
        numberofguess++;
    } while (myguess != number);

    return 0;
}
