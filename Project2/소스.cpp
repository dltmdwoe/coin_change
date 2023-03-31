#include<stdio.h>

void print_change(void);

int main(void)
{
	print_change();

	return 0;
}

void print_change(void)
{
	int change = 730;
	int change500, change100, change10;

	change500 = change / 500;
	change = change % 500;
	change100 = change / 100;
	change = change % 100;
	change10 = change / 10;
	change = change % 10;

	printf("500원: %d개\n", change500);
	printf("100원: %d개\n", change100);
	printf("10원: %d개\n", change10);

}