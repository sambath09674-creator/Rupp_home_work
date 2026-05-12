#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (){

    int a = 0, e = 0, i = 0, o = 0, u = 0;
    char str [20]; 
    printf ("Please enter a string: ");
    fgets (str, sizeof(str), stdin);

    for (int i=0; str[i]; i++){
        str[i] = toupper(str[i]);
    }  
    printf ("Capital in Uppercase: %s", str);
    printf ("**************************************************************\n");
    
    for (int j=0; str[j]; j++){
        if (str[j] == 'a' || str[j] == 'A'){
            a++;
        }
        else if (str[j] == 'e' || str[j] == 'E'){
            e++;
        }
        else if (str[j] == 'i' || str[j] == 'I'){
            i++;
        }
        else if (str[j] == 'o' || str[j] == 'O'){
            o++;
        }
        else if (str[j] == 'u' || str[j] == 'U'){
            u++;
        }
    }

    int total_vowels = a + e + i + o + u;
    printf ("Total number of vowels: %d\n", total_vowels);
    printf ("***************************************************************\n");



    return 0;
}
