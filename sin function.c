#include <stdio.h>
#include <math.h>

int main() {
    int i, z = 1;
    double x, res = 0;
    long f = 1;
    printf("Enter x (in degrees): ");
    scanf("%lf", &x);


    x = x * M_PI / 180.0;


    for (i = 1; i <= 19; i += 2) {
        res = res + z * pow(x, i) / f;
        z = -z;
        f = f * (i + 1) * (i + 2);
    }

    printf("\nSin(%lf degrees) = %lf\n", x * 180.0 / M_PI, res);
    return 0;
}
