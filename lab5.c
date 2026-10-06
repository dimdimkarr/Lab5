#include <stdio.h>
#include <math.h>
#include <locale.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    setlocale(LC_ALL, "RUS");

    // ЗАДАНИЕ 1
    double grad, rad, result_sin;

    printf("Введите угол в градусах: ");
    scanf("%lf", &grad);

    rad = grad * M_PI / 180.0;
    result_sin = sin(rad);

    printf("sin(%.0lf) = %.6lf\n", grad, result_sin);

    // ЗАДАНИЕ 2
    double x, a, b, y;
    const double k = 8.2;

    printf("\nВведите значение x: ");
    scanf("%lf", &x);

    b = sqrt(fabs(x));
    a = pow(b, 4) + pow(k, 3);
    y = pow(log(a), 3) + exp(-x);

    printf("y = %.2lf\n", y);

    // ЗАДАНИЕ 3
    int A, B, C;

    A = (int)a;
    B = (int)b;
    C = (int)y;

    // а) Только одно из чисел A и B четное
    int cond_a = ((A % 2 == 0) && (B % 2 != 0)) ||
                 ((A % 2 != 0) && (B % 2 == 0));

    printf("\nа) Только одно из A и B четное: %d\n", cond_a);

    // б) Каждое из чисел A, B, C кратно трем
    int cond_b = (A % 3 == 0) &&
                 (B % 3 == 0) &&
                 (C % 3 == 0);

    printf("б) A, B и C кратны трем: %d\n", cond_b);

    return 0;
}