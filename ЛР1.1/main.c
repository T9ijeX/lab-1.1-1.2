#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#define Name "Арсеній"
#define LastName "Зайцев"
#define GroupName "РІ-61"
#define Faculty "РТФ"
#define University "КПІ ім. Ігоря Сікорського"

int main()
{
    char semestr;
    long double admissionScore;
    int grade1, grade2, grade3, grade4, grade5, grade6;
    double averageGrade;
    unsigned int age;

    printf("%s %s, будь ласка, введіть наступні дані.\n", Name, LastName);

    printf("Введіть свій вік: ");
    scanf("%u", &age);

    printf("Введіть номер семестру: ");
    scanf("%c", &semestr);

    printf("Введіть свій вступний бал: ");
    scanf("%Lf", &admissionScore);

    printf("Введіть оцінку за предмет №1: ");
    scanf("%d", &grade1);
    printf("Введіть оцінку за предмет №2: ");
    scanf("%d", &grade2);
    printf("Введіть оцінку за предмет №3: ");
    scanf("%d", &grade3);
    printf("Введіть оцінку за предмет №4: ");
    scanf("%d", &grade4);
    printf("Введіть оцінку за предмет №5: ");
    scanf("%d", &grade5);
    printf("Введіть оцінку за предмет №6: ");
    scanf("%d", &grade6);
    averageGrade = (double)(grade1 + grade2 + grade3 + grade4 + grade5 + grade6) / 6.0;
    system("cls");

    printf("****************************************\n");
    printf("========================================\n");

    printf("Університет: %s\n", University);
    printf("Факультет:   %s\n", Faculty);
    printf("Група:       %s\n", GroupName);
    printf("----------------------------------------\n");
    printf("Студент:     %s %s\n", Name, LastName);
    printf("Вік:         %u\n", age);
    printf("Семестр:     %c\n", semestr);
    printf("----------------------------------------\n");

    printf("Вступний бал: %.1Lf\n", admissionScore);
    printf("Середній бал: %.2f", averageGrade);
    return 0;
} 
