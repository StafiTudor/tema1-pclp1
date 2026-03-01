//314CA-Stafi Tudor
#include <stdio.h>
#include <math.h>
#include <limits.h>

void citire(long double a[][500], long long n)
{
	long long i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%Lf", &a[i][j]);
}

void fct(long long n)
{
	long long x = 0, y = 0, rest, sum = 0, p, mod, fin, c1, c2;
	long double a[500][500];
	citire(a, n);
	while (a[x][y] != INT_MAX) {
		if (a[x][y] < 0)
			mod = -a[x][y];
		else
			mod = a[x][y];
		rest = mod % n;
		p = a[x][y];
		a[x][y] = INT_MAX;
		if ((x + y) % 2 == 1) {
			if (p > 0) {
				if (rest > n - x - 1)
					x = rest - n + x;
				else
					x = x + rest;
			}
			if (p < 0) {
				if (x < rest)
					x = n - rest + x;
				else
					x = x - rest;
			}
		} else {
			if (p > 0) {
				if (rest > n - y - 1)
					y = rest - n + y;
				else
					y = y + rest;
			}
			if (p < 0) {
				if (y < rest)
					y = n - rest + y;
				else
					y = y - rest;
			}
		}
		sum = sum + mod;
	}
	printf("%lld\n%lld ", sum, n - x);
	fin = y + 65;
	if (y > 25) {
		c1 = y / 26 + 64;
		c2 = y - (y / 26) * 26 + 65;
		printf("%c%c\n", (char)c1, (char)c2);
	} else {
		printf("%c\n", (char)fin);
	}
}

int main(void)
{
	long long n;
	scanf("%lld", &n);
	fct(n);
	return 0;
}
