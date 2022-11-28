#include <stdio.h>

int func(int n) {
	if (n == 0) {
		return 0;
	}
	return n % 10 + func(n / 10);
}

int main() {
	int x;
	scanf("%d", &x);
	printf("%d\n", func(x));
	return 0;
}
