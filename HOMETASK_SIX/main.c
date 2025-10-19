#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int n, sum = 0, temp;

    printf("������� ����� N (N < 1000): ");
    scanf("%d", &n);

    if (n >= 1000) {
        printf("������: ����� ������ ���� ������ 1000\n");
        return 1;
    }


    temp = n;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    // ��������� ��������� ���
    if (sum % 3 == 0) {
        printf("����� ���� ����� %d ����� %d � ������ ���\n", n, sum);
    }
    else {
        printf("����� ���� ����� %d ����� %d � �� ������ ���\n", n, sum);
    }

    return 0;
}