#include <stdio.h>
int main(){

    int mounth;
    printf("Enter your number of mounth (1-12): ");
    scanf("%d", &mounth);

    switch(mounth) {
        case 1:
            printf("You selected January.\n");
            break;
        case 2:
            printf("You selected February.\n");
            break;
        case 3:
            printf("You selected March.\n");
            break;
        case 4:
            printf("You selected April.\n");
            break;
        case 5:
            printf("You selected May.\n");
            break;
        case 6:
            printf("You selected June.\n");
            break;
        case 7:
            printf("You selected July.\n");
            break;
        case 8:
            printf("You selected August.\n");
            break;
        case 9:
            printf("You selected September.\n");
            break;
        case 10:
            printf("You selected October.\n");
            break;
        case 11:
            printf("You selected November.\n");
            break;
        case 12:
            printf("You selected December.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
