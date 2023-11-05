/*
Branch task-4. Поменять в целом положительном числе (типа int) значение третьего
бита на введенное пользователем число (изначальное число также
вводится с клавиатуры).
*/

#include <stdio.h>

void printfBinary(int n){
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--)
        printf("%d", (n >> i) & 1);
    printf("\n");
}

int main(){
    int number = 0; 
    printf("Enter a positive integer: ");   scanf("%d", &number);   getchar(); // Поглощает символ '\n' после scanf
    int bit = 0;
    printf("Enter 3-rd bit: ");   scanf("%d", &bit);

    printf("\nInput number: %d\n", number);
    printf("Input number in binary:  ");     printfBinary(number);

    int mask = 0xFFFFFFFB; // 1...1111 1011
    if (bit)
        number = (number | (~mask));
    else
        number = number & mask;

    printf("Output number: %d\n", number);
    printf("Output number in binary: ");    printfBinary(number);
}