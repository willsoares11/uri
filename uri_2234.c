#include <stdio.h>
 
int main() {
 
    float H, P, Average;

    scanf ("%f %f",&H, &P);

    Average = H / P;

    printf("%.2f\n", Average);
 
    return 0;
}