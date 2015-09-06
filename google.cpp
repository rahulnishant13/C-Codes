#include <stdio.h>
#include <complex.h>
int main(void)
{
    double complex dc1 = 3 + 2*I;
    double complex dc2 = 4 + 5*I;
    double complex result;

    result = dc1 + dc2;
    printf("%f + %fi", creal(result), ciamg(result));

    return 0;
}
