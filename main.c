/*
Branch task-1. Вывести двоичное представление целого положительного числа,
используя битовые операции (число вводится с клавиатуры).
*/

#include <stdio.h>

int main(){
    unsigned int number = 0; 
    printf("Enter a positive integer: "); scanf("%u", &number);

    printf("Entered number in binary: ");
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--)
        printf("%u", (number >> i) & 1);
    printf("\n");
}