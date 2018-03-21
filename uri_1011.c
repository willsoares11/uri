#include <stdio.h>
#include <math.h>
 
int main() {
 
    double R, Vol;

    scanf ("%lf", &R);

    Vol = 4.0/3 * 3.14159 * pow (R,3);

    printf ("VOLUME = %.3lf\n", Vol);
 
    return 0;
}