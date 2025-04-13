#include <stdio.h>
#include <math.h>

int main() {
    int i, z = 1;
    double x, res = 1;
    long f = 1;
    printf("Enter x (in degrees): ");
    scanf("%lf", &x);


    x = x * M_PI / 180.0;


    for (i = 2; i <= 8; i += 2) {
        f = f * (i - 1) * i;
        res = res + z * pow(x, i) / f;
        z = -z;
    }

    printf("\nCos(%lf degrees) = %lf\n", x * 180.0 / M_PI, res);

    return 0;
}
