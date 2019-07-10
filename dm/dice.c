#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i , a , b , total;
    printf("Rolling the dice . . . \n");
    srand((unsigned)time(NULL));      

        a = (rand() % 6) + 1;
        printf("Dice1 : %d \n" , a );
    
        b = (rand() % 6) + 1;
        printf("Dice2 : %d \n" , b );

total = a + b;
printf("Total Value : %d \n" , total );

if(total >= 7)printf("You win.\n");
else printf("You lose.\n");

return 0;
}