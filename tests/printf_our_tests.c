#include "../main.h"

/**
 * main - Entry point for testing _printf
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("--- Task 0 Tests ---\n");
	_printf("Character: [%c]\n", 'H');
	_printf("String: [%s]\n", "Holberton School");
	_printf("Percent: [%%]\n");

	_printf("\n--- Task 1 Tests (Integers) ---\n");
	_printf("Positive Number: [%d]\n", 98);
	_printf("Negative Number: [%d]\n", -1024);
	_printf("Zero: [%i]\n", 0);

	return (0);
}
