/*
Branch task-3. Найти количество единиц в двоичном представлении целого
положительного числа (число вводится с клавиатуры).
*/
#include <stdio.h>

int main(){
    unsigned int number = 0; 
    printf("Enter a positive integer: "); scanf("%u", &number);

    int sum = 0;
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--)
        sum = sum + ((number >> i) & 1);
    printf("Number of ones in binary: %d\n", sum);
}