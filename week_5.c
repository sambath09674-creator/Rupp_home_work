#include <stdio.h>

int main() {
    int x, y;
    x = 10;
    y = 15;
    
    // Post-increment: x++ returns original value (10), then increments to 11
    // Then x = 10 assigns the original value back, overwriting the increment
    x = x++;  // x becomes 10 (not 11)
    
    // Pre-increment: ++y increments y first (15 → 16), then returns new value
    y = ++y;  // y becomes 16
    
    printf("x = %d\n", x);  // Output: 10
    // Explanation: x = x++ assigns the OLD value (10) back to x
    
    printf("y = %d\n", y++);  // Output: 16 (then y increments to 17)
    // Explanation: y++ prints current value (16), THEN increments y to 17
    
    printf("Is x smaller than y? %d\n", x < y);  // Output: 1 (true)
    // Explanation: At this point x = 10, y = 17, so 10 < 17 is true (1)
    
    printf("Is x larger than y? %d\n", x > y);   // Output: 0 (false)
    // Explanation: 10 > 17 is false (0)
    
    printf("Is y equal to 17? %d\n", y == 17);   // Output: 1 (true)
    // Explanation: y is now 17 (after the y++ in previous printf), so true (1)
    
    return 0;
}