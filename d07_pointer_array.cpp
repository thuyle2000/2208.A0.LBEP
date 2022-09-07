#include <stdio.h>
#include <stdlib.h>

//chuong trinh demo pointer ket hop voi array
int main(){
    system("cls");

    //khai bao mang so nguyen a
    int a[] = {12, 89, 3, 7, 100, 92};

    for (int i = 0; i < 6; i++)
    {
         printf(" a + %2d = %X [%d] | (%4d) \n", i, a+i, a+i, *(a+i));
    }
    
}