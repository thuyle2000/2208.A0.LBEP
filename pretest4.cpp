#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Q1();
void Q2();

int main()
{
    system("cls");

    int option = 0;
    do
    {
        printf("\n***** WELCOME PRETEST 4 *****\n");
        printf("1. Question 1\n");
        printf("2. Question 2\n");
        printf("3. Quit program\n");

        printf("input option [1-3]:");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            Q1();
            break;
        case 2:
            Q2();
            break;
        case 3:
            exit(0);
        default:
            printf("WRONG OPTION!!");
            break;
        }
    } while (1);
}

void Q1()
{
}

struct NATION
{
    char name[30], captital[30];
    int area;
};

void Q2()
{
    int n;
    while (1 == 1)
    {
        printf("Enter the number of countries : ");
        scanf("%d", &n);
        if (n >= 3 && n <= 10)
        {
            break;
        }
    }

    // khai bao bien mang ds[] chua n-quoc gia muon quan ly
    struct NATION ds[n];

    // vong lap nhap du lieu cho n-quoc gia
    printf("Please enter the data for \n");
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Country no %d: \n", i+1);
        printf(" name: "); gets(ds[i].name);
        printf(" capital: "); gets(ds[i].captital);
        printf(" area (square miles): "); scanf("%d", &ds[i].area);
    }

    //in ra danh sach cac quoc gia (ko can de bai yeu cau cung lam)
    printf("\n\n List of Nations \n");
    for (int i = 0; i < n; i++)
    {
       printf(" %2d. %s, %s, %d \n", i+1, ds[i].name, ds[i].captital, ds[i].area);
    }
    
    //xep thu tu quoc gia theo thu tu dien tich giam dan
    struct NATION temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int k = i+1; k< n; k++)
        {
            if(ds[i].area <ds[k].area){
                temp = ds[i];
                ds[i] = ds[k];
                ds[k] = temp;
            }
        }
    }

    //in ra ten cua quoc gia co dien tich lon nhat
    printf("\n =>  THE LARGEST NATION IS %s \n", ds[0].name);

}