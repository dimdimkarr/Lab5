#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    // ВАРИАНТ 6

    double x, y, z, beta;

    printf("Введите x: ");
    scanf("%lf", &x);

    printf("Введите y: ");
    scanf("%lf", &y);

    printf("Введите z: ");
    scanf("%lf", &z);

    beta = sqrt(10.0 * (pow(x, 1.0 / 3.0) + pow(x, y + 2.0)))
           * (fabs(x - y) - pow(asin(z), 2.0));

    printf("Beta = %.6lf\n", beta);

    return 0;
}