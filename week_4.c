#include <stdio.h>

int main()
{
    double number = 1234.56;
    
    // Default float output
    printf("%f\n", number);       // 1234.560000
    
    // Scientific notation
    printf("%e\n", number);       // 1.234560e+03
    
    // No decimal places, width 4
    printf("%4.f\n", number);     // 1235 (rounded, width 4)
    
    // One decimal place, width 3
    printf("%3.1f\n", number);    // 1234.6 (width 3 is ignored)
    
    // Left-justified, 3 decimal places, width 10
    printf("%-10.3f\n", number);  // 1234.560   (left-aligned)
    
    // Right-justified, 3 decimal places, width 10
    printf("%10.3f\n", number);   //   1234.560 (right-aligned)
    
    // Scientific notation, 3 decimal places, width 10
    printf("%10.3e\n", number);   // 1.235e+03
    
    return 0;
}
