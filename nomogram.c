//314CA-Stafi Tudor
#include <stdio.h>

void afisare(int a[][101], int n, int m)
{
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}

int fct(int nan[][101], int lin[][101], int col[][101], int n, int m)
{
	for (int i = 1; i <= n; i++) {
		int val = 0, l = 0;
		for (int j = 1; j <= m; j++) {
			if (nan[i][j] == 1)
				val++;
			if (nan[i][j] == 0 && val != 0) {
				l++;
				if (lin[i][l] != val)
					return 0;
				val = 0;
			}
			if (j == m && nan[i][j] == 1) {
				l++;
				if (lin[i][l] != val)
					return 0;
				val = 0;
			}
		}
	}
	for (int j = 1; j <= m; j++) {
		int val = 0, l = 0;
		for (int i = 1; i <= n; i++) {
			if (nan[i][j] == 1)
				val++;
			if (nan[i][j] == 0 && val != 0) {
				l++;
				if (col[l][j] != val)
					return 0;
				val = 0;
			}
			if (i == n && nan[i][j] == 1) {
				l++;
				if (col[l][j] != val)
					return 0;
				val = 0;
			}
		}
	}
	return 1;
}

int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, m;
		scanf("%d %d", &n, &m);
		int nan[101][101];
		int lin[101][101];
		int col[101][101];
		for (int i = 1; i <= n; i++) {
			int x;
			scanf("%d", &x);
			for (int j = 1; j <= x; j++)
				scanf("%d", &lin[i][j]);
		}
		for (int j = 1; j <= m; j++) {
			int x;
			scanf("%d", &x);
			for (int i = 1; i <= x; i++)
				scanf("%d", &col[i][j]);
		}
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				scanf("%d", &nan[i][j]);
		if (fct(nan, lin, col, n, m))
			printf("Corect\n");
		else
			printf("Eroare\n");
	}
	return 0;
}
