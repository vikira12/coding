#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, k, arr[1001] = { 0 }, count = 0;
	scanf("%d %d", &n, &k);
	for (int i = 2; i <= n; i++) {
		for (int j = i; j <= n; j += i) {
			if (arr[j] == 0) {
				count++;
				arr[j] = 1;
			}
			if (count == k) {
				printf("%d", j);
				return 0;
			}
		}
	}
}