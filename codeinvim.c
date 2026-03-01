//314CA-Stafi Tudor
#include <stdio.h>
#include <math.h>

void naive(int v[], int n)
{
	for (int i = 1; i < n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (v[i] < v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
}

void fct(int n)
{
	int v[101], c[101], r[101], sum = 0, k = 0, nr = 0, pmin;
	for (int i = 1; i <= n; i++)
		scanf("%d", &v[i]);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &c[i]);
		sum = sum + v[i] * c[i];
		if (v[i] != 10)
			r[++k] = (10 - v[i]) * c[i];
	}
	scanf("%d", &pmin);
	naive(r, k);
	for (int i = 1; i <= k; i++) {
		if (sum < pmin) {
			nr++;
			sum = sum + r[i];
		}
	}
	if (sum < pmin)
		printf("-1");
	else
		printf("%d", nr);
}

int main(void)
{
	int n;
	scanf("%d", &n);
	fct(n);
	return 0;
}
