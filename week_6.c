#include <stdio.h>
#include <math.h>
int main (){

    int a, b, c;
    float x1, x2, x;
    float delta;
    printf ("by using ax^2 + bx + c = 0\n");
    printf ("Enter a, b, c: ");
    scanf ("%d %d %d", &a, &b, &c);

    delta = b*b - 4*a*c;
    if (delta > 0){
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf ("Two distinct real roots\n");
    }
    else if (delta == 0){
        x = -b / (2*a);
        printf ("One real root: %.2f\n", x);
    }
    else {
        printf ("No real roots\n");
    }


    return 0;
}
