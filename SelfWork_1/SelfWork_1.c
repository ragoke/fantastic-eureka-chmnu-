#include <stdio.h>
#include <math.h>

int main() {
    double a = 9.07;
    double b = 6.39;
    double x = 5.17;
    double result;

    result = a * cos(b * acos(abs(4 - x)));

    printf("Результат: %lf\n", result);

    return 0;
}
