#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

#define ROWS 14

int main()
{
   
    unsigned int var = 0;
    int N = 0;
    int i = 0;
    double X1 = 0.0, X2 = 0.0, delta = 0.0;
    double x = 0.0, y = 0.0;
    double xp = 0.0, yp = 0.0;
    int n1 = 0;
    int n2 = 1;
    printf("Enter variant (1 or 2): ");
    scanf("%u", &var);
    while (var != 1 && var != 2)
    {
        printf("Incorrect number entered, please enter again: ");
        scanf("%u", &var);
    }

    printf("Enter X1: ");
    scanf("%lf", &X1);
    printf("Enter X2: ");
    scanf("%lf", &X2);
    switch(var)
    {


    case 1:
            printf("Enter N: ");
            scanf("%d", &N);
            while (N <= 1)
            {
                printf("Incorrect number entered, please enter again: ");
                scanf("%d", &N);
            }
            delta = (X2 - X1) / (N - 1);
            break;
    case 2:
            printf("Enter delta: ");
            scanf("%lf", &delta);

            while ((X1 > X2 && delta > 0.0) || (X2 > X1 && delta < 0.0))
            {
                printf("Incorrect number entered, please enter again: ");
                scanf("%lf", &delta);
            }

            if (delta == 0.0)
            {
                N = 1;
            }
            else
            {
                N = (int)((X2 - X1) / delta + 1.000001);
            }
    }
    system("cls");
    printf("\n=======================================================\n");
    printf("Zaitsev Arseniy(variant 13):\n");
    printf("  X1    = %.4f\n", X1);
    printf("  X2    = %.4f\n", X2);
    printf("  delta = %.6f\n", delta);
    printf("  N     = %d\n", N);
    printf("=======================================================\n\n");
    n1 = 12;

    printf("+-------+-----------------------------+-----------------------------+\n");
    printf("|   N   |          Argument           |       Function value        |\n");
    printf("+-------+-----------------------------+-----------------------------+\n");
    n1 = n1 + 3;

    for (i = 0; i < N; i++)
    {
        x = X1 + i * delta;
        y = pow(x - 10.0, 3.0) * sin((x + 10.0) / 100.0) - 10.0 * x + 12.0;
        printf("| %5d | %27.6lf | %27.6lf |\n", i + 1, x, y);
        printf("+-------+-----------------------------+-----------------------------+\n");
        n1 = n1 + 1;

        if (n1 >= ROWS)
        {
            if (n2 == 1)
            {
                printf("Press Any Key to Continue...");
                _getch();
                printf("\r                            \r");
                n2 = 0;
            }
            else
            {
                _getch();
            }
            n1 = 0;
        }
    }


    printf("\nSign change:\n");
    for (i = 0; i < N; i++)
    {
        x = X1 + i * delta;
        y = pow(x - 10.0, 3.0) * sin((x + 10.0) / 100.0) - 10.0 * x + 12.0;
        if (i > 0 && yp * y < 0)
        {
            printf("[%lf ; %lf]\n", xp, x);
        }
        xp = x;
        yp = y;
    }

    return 0;
}