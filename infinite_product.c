//314CA-Stafi Tudor
#include <stdio.h>
#include <math.h>

void fct(long long n)
{
	long long ps = 0, x, y, a1 = -1, b1 = -1;
	long long a2 = -1, b2 = -1;
	double na = 0, nb = 0, a, b;
	for (int i = 0; i < n; i++) {
		scanf("%llo %llo", &x, &y);
		a = x;
		b = y;
		ps = ps + a * b;
		if (a > a1) {
			a2 = a1;
			a1 = a;
		} else if (a > a2 && a1 != a) {
			a2 = a;
		}
		if (b > b1) {
			b2 = b1;
			b1 = b;
		} else if (b > b2 && b1 != b) {
			b2 = b;
		}
		na = na + a * a;
		nb = nb + b * b;
	}
	na = sqrt(na);
	nb = sqrt(nb);
	printf("%lld\n", ps);
	printf("%lld ", a2);
	printf("%lld\n", b2);
	printf("%.7lf %.7lf\n", na, nb);
}

int main(void)
{
	long long n;
	scanf("%lld", &n);
	fct(n);
	return 0;
}
