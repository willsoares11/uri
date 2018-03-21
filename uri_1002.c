#include <stdio.h>
#include <math.h>

int main() 

{
 
    double raio, area;

    scanf ("%lf",&raio);

    area = powl(raio,2) * 3.14159;

    printf("A=%.4lf\n", area);
 
    return 0;
}