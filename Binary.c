#include "main.h"
/**
 * remary - print char
 * @args: pointer
 * Return: size
 */
int binary(va_list args) {
    int rem, result = 0, mul = 1;
    int input = va_arg(args, int);
    char binary[32];
    int i = 0;
    int j, temp;

    if (input == 0) {
        _putchar('0');
        return (1);
    }

    while (input > 0) {
        rem = input % 2;
        binary[i] = '0' + rem; 
        result = rem * mul + result;
        mul *= 10;
        input /= 2;
        i++;
    }

    for (j = 0; j < i / 2; j++) {
        temp = binary[j];
        binary[j] = binary[i - j - 1];
        binary[i - j - 1] = temp;
    }
    for (j = 0; j < i; j++) {
        _putchar(binary[j]);
    }

    return i;
}