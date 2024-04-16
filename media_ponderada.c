#include <stdio.h>

int main()
{

    float media = 0;
    float prova_1 = 0;
    float prova_2 = 0;
    float prova_3 = 0;

        printf("\ndigite a nota de sua prova 1: ");
        scanf("%f", &prova_1);

        printf("\ndigite a nota de sua prova 2: ");
        scanf("%f", &prova_2);

        printf("\ndigite a nota de sua prova 3: ");
        scanf("%f", &prova_3);

    media = prova_1 * 2.0 + prova_2 * 3.0 + prova_3 * 5.0;
    media = media / 10.0;

        printf("\na sua media final e: %.2f.", media);

    return 0;
}