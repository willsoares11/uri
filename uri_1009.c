#include <stdio.h>
 
int main() {
    
    char nom;

    double sal, vend, x;

    scanf("%s", &nom);

    scanf("%lf", &sal);

    scanf("%lf", &vend);

    x = sal + vend * 0.15;

    printf("TOTAL = R$ %.2lf\n",x);

 
    return 0;
}