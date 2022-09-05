#include <stdio.h>
#include <stdlib.h>

//demo vong lap FOR long nhau : in thap ngoi sao n-tang
int main(){

    system("cls");

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    
    printf("\n\n FINISHED.\n");
}