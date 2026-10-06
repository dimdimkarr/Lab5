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

    // Проверка допустимого диапазона для arcsin
    if (z < -1.0 || z > 1.0) {
        printf("Ошибка: значение z должно находиться в диапазоне [-1; 1].\n");
        return 1;
    }

    beta = sqrt(10.0 * (pow(x, 1.0 / 3.0) + pow(x, y + 2.0)))
           * (pow(asin(z), 2.0) - fabs(x - y));

    printf("Beta = %.6lf\n", beta);

    return 0;
}