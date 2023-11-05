/*
Branch task-2. Вывести двоичное представление целого отрицательного числа,
используя битовые операции (число вводится с клавиатуры).
*/
#include <stdio.h>

int main(){
    int number = 0; 
    printf("Enter a negative integer: "); scanf("%d", &number);

    printf("Entered number in binary: ");
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--)
        printf("%d", (number >> i) & 1);
    printf("\n");
}