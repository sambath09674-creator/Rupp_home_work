#include <stdio.h>

int main(){

    int c = 1;
        
        while (1)  // Infinite loop
        {
            if (c == 5)
                break;
            printf("\t %d", c);
            c++;
        }

        #include <stdio.h>

// +++++++++++++++++++++++++++++++++++++++++++++++

    #include <stdio.h>

    int main()
    {
        int c = 1;  // Initialize c
        
        for (;;)  // Infinite loop
        {
            if (c == 5)
                break;
            printf("\t %d", c);
            c++;
        }
        
        return 0;
    }

//++++++++++++++++++++++++++++++++++++++++++++++++

    int row, col;
    
    for (row = 1; row <= 4; ++row)
    {
        for (col = 1; col <= row; ++col)
            printf(" * \t");
        printf("\n");
    }

//++++++++++++++++++++++++++++++++++++++++++++++++

    int index;
    int Total;
    
    for (Total = 0, index = 0; index < 10; index += 1)
    {
        if (index > 5)
            Total += index;
        else if (index < 5)
            Total -= index;
    }
    
    printf("%d", Total);

    return 0;
}   
