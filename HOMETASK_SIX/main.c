#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int n, sum = 0, temp;

    printf("Введите число N (N < 1000): ");
    scanf("%d", &n);

    if (n >= 1000) {
        printf("Ошибка: число должно быть меньше 1000\n");
        return 1;
    }


    temp = n;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    // Проверяем кратность трём
    if (sum % 3 == 0) {
        printf("Сумма цифр числа %d равна %d и кратна трём\n", n, sum);
    }
    else {
        printf("Сумма цифр числа %d равна %d и НЕ кратна трём\n", n, sum);
    }

    return 0;
}
