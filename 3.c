#include <stdio.h>

int func(int n) {
	if (n == 0) {
		return 1;
	}
	return n * func(n - 1);
}

int main() {
	int x;
	scanf("%d", &x);
	printf("%d\n", func(x));
	return 0;
}
