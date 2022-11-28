#include <stdio.h>

void func(int n) {
	if (n == 0) {
		return;
	}
	func(n / 10);
	int d = n % 10;
	printf("%d ", d);
//	func(n / 10);
}

int main() {
	int x;
	scanf("%d", &x);
	printf("%d\n", func(x));
	return 0;
}
