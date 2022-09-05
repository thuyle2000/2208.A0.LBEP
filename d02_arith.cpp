#include <stdio.h>
#include <stdlib.h>

//chuong trinh demo cac phep toan so hoc
int main(){
    system("cls");

    int a,b,c;
    printf(" nhap so thu 1 (a): ");
    scanf("%d" , &a);
    printf(" nhap so thu 2 (b): ");
    scanf("%d" , &b);

    //in ket qua cua cac phep toan 1 ngoi: -, ++, --
    printf("\n Cac phep toan 1 ngoi (unary operators):\n");
    printf("  -a = %d \n", -a);
    printf(" --a = %d \n", --a);
    printf(" ++a = %d \n", ++a); 

    printf(" a-- = %d \n", a--);
    printf(" a++ = %d \n", a++);

    //in ra ket qua cua cac phep toan 2 ngoi
    printf("\n Cac phep toan 2 ngoi (binary operators):\n");
    printf(" %d + %d  = %d \n", a, b, c=a+b);
    printf(" %d - %d  = %d \n", a, b, c=a-b);
    printf(" %d * %d  = %d \n", a, b, a*b);
    printf(" %d / %d  = %d \n", a, b, a/b);
    printf(" %d %% %d  = %d \n", a, b, a%b);

    //in ra ket qua cua cac phep toan luan ly nhi phan (bitwise logical)
    printf("\n Cac phep toan luan ly nhi phan (bitwise logical):\n");  
    printf(" or : %d | %d = %d \n", a, b, a|b); 
    printf(" and: %d & %d = %d \n", a, b, a&b);
    printf(" xor: %d ^ %d = %d \n", a, b, a^b);

}