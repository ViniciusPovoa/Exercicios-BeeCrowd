#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double delta = (B * B) - (4 * A * C);

    if (A == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        double x1 = (-B + sqrt(delta)) / (2 * A);
        double x2 = (-B - sqrt(delta)) / (2 * A);

        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }

    return 0;
}
