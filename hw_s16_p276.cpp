#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// khai bao prototype ham tinh giai thua va tinh dt, cv hinh tron
double fn_factorial(int n);
void fn_circle(double r, double &area, double &perimeter);

int main()
{
    int n;
    double r, dt, cv;
    int choice = 0;

    // thiet ke menu chuong trinh
    while (1 == 1)
    {
        system("cls");
        printf(" == MENU == \n");
        printf(" 1. Factorial \n");
        printf(" 2. Get Area, Perimeter of Circle \n");
        printf(" 3. Exit \n");
        printf("===============\n");
        printf(" Plz enter your choice [1-3] : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\n Input integer number: ");
            scanf("%d", &n);
            printf(" => %d! = %.0f \n", n, fn_factorial(n));
            break;

        case 2:
            printf("\n Input radius r: ");
            scanf("%lf", &r);
            fn_circle(r, dt, cv);
            printf(" => Area     : %.2f \n", dt);
            printf(" => Perimeter: %.2f \n", cv);
            break;

        case 3:
            return 0;

        default:
            printf("\n => Invalid choice !!! \n\n");
            break;
        }

        printf("\n >> press any key ...");
        getch();
    }
}

// ham tinh giai thua cua so nguyen n
double fn_factorial(int n)
{
    double r = 1;
    for (int i = 1; i <= n; i++)
    {
        r *= i;
    }
    return r;
}

// ham tinh dien dich va chu vi cua hinh tron
void fn_circle(double r, double &area, double &perimeter)
{
    area = 3.1415 * r * r;
    perimeter = 2 * 3.1415 * r;
    
}