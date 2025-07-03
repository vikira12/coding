#include <stdio.h>
#include <stdlib.h>

int main() {
	int **a, **b, **total, count = 0, n;
	
	scanf("%d", &n);

	a = (int**)malloc(sizeof(int*) * 300);
	b = (int**)malloc(sizeof(int*) * 300);
	total = (int**)malloc(sizeof(int*) * 300);

	for (int i = 0; i < n; i++) {
		a[i] = (int*)malloc(sizeof(int) * 300);
		b[i] = (int*)malloc(sizeof(int) * 300);
		total[i] = (int*)malloc(sizeof(int) * 300);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &b[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			total[i][j] = 0;
			for (int k = 0; k < n; k++) {
				if (a[i][k] == 1 && b[k][j] == 1) {
					total[i][j] = 1;
					break;
				}
			}
		}
	}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (total[i][j] == 1)
				count++;

	printf("%d\n", count);

	for (int i = 0; i < n; i++) {
		free(a[i]);
		free(b[i]);
		free(total[i]);
	}
	free(a);
	free(b);
	free(total);

	return 0;
}