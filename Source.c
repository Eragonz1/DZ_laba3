#include <stdio.h>

int main() {

    int datchik_A, datchik_B, datchik_C, datchik_D;

    int condition;

    printf("=== СИСТЕМА СИГНАЛИЗАЦИИ ===\n");

    printf("Введите состояние датчиков (1 - сработал, 0 - не сработал)\n");

    printf("Датчик A: ");
    scanf("%d", &datchik_A);
    printf("Датчик B: ");
    scanf("%d", &datchik_B);
    printf("Датчик C: ");
    scanf("%d", &datchik_C);
    printf("Датчик D: ");
    scanf("%d", &datchik_D);

    condition = 
        (datchik_A == 1 && datchik_B == 1 && datchik_C == 1) ||
        (datchik_A == 1 && datchik_B == 1 && datchik_D == 1) ||
        (datchik_A == 1 && datchik_C == 1 && datchik_D == 1) ||
        (datchik_B == 1 && datchik_C == 1 && datchik_D == 1);

    printf("Состояние сигнализации (1 - сработала, 0 - не сработала): %d\n", condition);

    return 0;

}