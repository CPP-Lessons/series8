#include <stdio.h>

int func(int n) {
	if (n == 1) {
		return 1;
	}
	if (n % 2 != 0) {
		return 0;
	}
	func(n / 2);
}

int main() {
	int x;
	scanf("%d", &x);
	if (func(x) == 1) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
}
