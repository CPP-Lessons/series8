#include <stdio.h>

void func(int n) {
	if (n == 0) {
		return;
	}
	func(n - 1);
	printf("%d ", n);
}

int main() {
	int x;
	scanf("%d", &x);
	func(x);
	return 0;
}
