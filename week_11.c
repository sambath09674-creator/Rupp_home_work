// make a small program allow user to input a string and change the input string

#include <stdio.h>
#include <string.h>
int main (){

    char things [11];
    char thing1 [11], thing2 [11];
    int i;

    printf("**********************Guessing Game**********************\n");

// input and processing
    while (1){

        printf ("Plss Enter Name of fruit\nless than 10 letter\nwhich start with (o) and second is (r): ");
        scanf ("%s", things);

            if (things [0] == 'o' && things [1] == 'r'){
                
            printf ("****************WOW****************\n");
            printf ("Congraulation!! The word is %s.", things);
                break;
            }
            else {
            printf ("It's must start with or....!\n");
            }
        }

// coppying things
    for (i=0; i<=10; i++){
        thing1 [i] = things [i];
        thing2 [i] = things [i];
    }

// change to x
    for (i=1; i<10; i+=2){
        thing1 [i] = 'X';
    }
    printf ("\nCharactor with X: %s", thing1);

// change to z
    for (i=0; i<10; i+=2){
        thing2 [i] = 'Z';
    }
    printf ("\nCharactor with Z: %s", thing2);

    return 0;
}
