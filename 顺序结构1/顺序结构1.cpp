#include<stdio.h>
int main()
{
	int a, b, c, d, m, hundred, fifty, twenty, ten, five, one;
	scanf_s("%d", &m);
	a = m % 100;
	hundred = (m - a) / 100;
	b = a % 50;
	fifty = (a - b) / 50;
	c = b % 20;
	twenty = (b - c) / 20;
	d = c % 10;
	ten = (c - d) / 10;
	one = d % 5;
	five = (d - one) / 5;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n", hundred, fifty, twenty, ten, five, one);
	return 0;
}