#include <stdio.h>
#include <stdlib.h>

/* chuong trinh in day so fibonacci n-phan tu (version 2 - ko dung IF):
   1, 1, 2, 3, 5, 8, 13, 21, 34, 55 ...  */
int main()
{
    system("cls");

    int n;
    do
    {
        printf(" nhap so phan tu cua day so fibonacci [3-30] : ");
        scanf("%d", &n);
        if (n >= 3 && n <= 30)
        {
            break;
        }
    } while (1 == 1);

    printf("\n Day so fibonacci %d-phan tu (version 2) \n", n);
    int f1 = 0, f2 = 0, fi = 1;
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", fi);
        f1 = f2;
        f2 = fi;

        fi = f2 + f1;
    }
}