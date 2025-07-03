#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int year, month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }, week = 2, count = 0;

	scanf("%d", &year);

	for (int i = 2019; i <= year; i++) {
		if (i % 4 == 0) {
			month[1] = 29;
			if (i % 100 == 0) {
				month[1] = 28;
				if (i % 400 == 0) {
					month[1] = 29;
				}
			}
		}
		else {
			month[1] = 28;
		}

		for (int j = 0; j < 12; j++) {
			for (int k = 1; k <= month[j]; k++) {
				if (k == 13 && week == 5) {
					count++;
				}
				week++;
				if (week > 7) week = 1;
			}
		}
	}

	printf("%d", count);

	return 0;
}