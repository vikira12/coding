#include <stdio.h>
#include <string.h>

int main() {
	char x[1000001];
	int sum, count = 0;
	scanf("%s", x);
	while (strlen(x) > 1) {
		sum = 0;
		for (int i = 0; x[i]; i++) {
			sum += x[i] - '0';
		}
		sprintf(x, "%d", sum);
		count++;
	}
	printf("%d\n", count);
	if ((x[0] - '0') % 3 == 0) printf("YES");
	else printf("NO");
	return 0;
}