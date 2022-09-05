#include <stdio.h>
#include <stdlib.h>

//demo vong lap while va vong lap FOR long nhau : 
// in thap ngoi sao n-tang, voi n >=3 va n <=10
int main(){

    system("cls");

    int n = 0;

    while(n<3 || n>10){
        printf(" vui long nhap so tang [3-10]: ");
        scanf("%d", &n);
    }


    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    
    printf("\n\n FINISHED.\n");
}